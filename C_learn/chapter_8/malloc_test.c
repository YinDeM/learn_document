/**
 * malloc不是从编译时就确定的固定大小的数组中分配空间，而是在需要时向操作系统申请空间。
 * 因为程序中的某些地方可能不通过malloc调用申请控件，所以malloc管理的空间不一定是连续的。
 * 空闲存储空间以空闲链表的形式组织。每个块包含一个长度、一个指向下一块的指针以及一个指向自身的存储空间的指针。
 * 这些块按照存储地址的升序排列，最后一块指向第一块。
 * 分配的地址，有一个头部，其中存储了下一个空闲块的地址和块的大小。返回给用户的指针是指向空闲空间的指针。
 * 
 * 就是通知操作系统，先前申请的指定部分的变量所使用的空间不再使用，使用权交还给操作系统，以便分配给其它程序使用。
 * dispose(p)就是将变量p所代表的空间还给操作系统的意思（原本是向操作系统申请由本程序使用的，操作系统不会再分给别的程序使用）。
 */

typedef long Align;     //按照long类型的边界对齐

union header {                  //块的头部
    struct {
        union header *ptr;      //空闲块链表中的下一块
        unsigned size;          //本块的大小
    } s;
    Align x;                    //强制块的对齐
}

typedef union header Header;


static Header base;             //从空链表开始
static Header *freep = NULL;    //空闲链表的初始指针

void *malloc(unsigned nbytes){
    Header *p, *prevp;
    Header *morecore(unsigned);
    unsigned nunits;

    nunits = (nbytes + sizeof(Header) - 1)/sizeof(Header) + 1;//
    if ((prevp = freep) == NULL) {      //没有空闲链表
        base.s.ptr = freep = prevp = &base;
        base.s.size = 0;
    }
    for (p = prevp->s.ptr; ; prevp = p, p = p->s.ptr) {
        if (p->s.size >= nunits) {  //足够大
            if (p->s.size == nunits){       //正好
                prevp->s.ptr = p->s.ptr;
            } else {    //分配末尾部分
                p->s.size -= nunits;
                p += p->s.size;
                p->s.size = nunits;
            }
            freep = prevp;
            return (void *)(p+1);
        }
        if (p == freep) {//闭环的空闲链表
            if ((p = morecore(nunits)) == NULL){
                return NULL;//没有剩余的存储空间
            }
        }
    }
}