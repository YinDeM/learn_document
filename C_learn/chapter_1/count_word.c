/**
 * 统计行数、单词数和字符数
 */

#include <stdio.h>

#define IN 1        //在单词外
#define OUT 0       //在单词内

int main(){
    int c, nl, nw, nc, state;

    state =OUT;//标识现在字符读到单词内还是单词外
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;//字符数
        if (c == '\n') {
            ++nl;//行数
        }
        if (c == ' ' || c == '\n' || c == '\t') {//是这三种则在单词外，将状态赋值为OUT。读到单词后，这里进不去，但是当读到单词结尾，将状态赋值为OUT。
            state = OUT;
        } else if (state == OUT) {//不是以上三种字符而且在单词外。说明读到有效字符，将状态置为IN，单词数加1，然后在读到单词结尾前，这里进不来了。
            state = IN;
            ++nw;//单词数
        }
    }
    printf("%d, %d, %d\n", nl, nw, nc);
    return 0;
}