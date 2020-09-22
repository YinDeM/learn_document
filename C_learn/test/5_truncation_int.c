/**
 * 题目5：取一个整数a从右端开始的4～7位。
 */

#include <stdio.h>

int main(){
    int in = 7654321;
    char s[20];
    sprintf(s, "%d", in);
    for (int i = 6; i >= 0; --i) {
        if (i == 3 || i == 2 || i == 1 || i == 0) {
            printf("%c", s[i]);
        }
    }
    return 0;
}

// main()
// {
//     unsigned a,b,c,d;
//     scanf("%o",&a);
//     b=a>>4;
//     c=~(~0<<4);
//     d=b&c;
//     printf("%o\n%o\n",a,d);
// }
// 程序分析：可以这样考虑： 
// (1)先使a右移4位。
// (2)设置一个低4位全为1,其余全为0的数。可用~(~0<<4)
// (3)将上面二者进行&运算。
// 2.程序源代码：