/**
 * 编写一个程序，以每行一个单词的形式打印其输入
 */

#include <stdio.h>

#define IN 1        //在单词外
#define OUT 0       //在单词内

int main(){
    //有bug，多个空格就会打印多次换行
    // int c;
    // int state = IN;
    // while ((c = getchar()) != EOF) {
    //     if (c == ' ' || c == '\t' || c == '\n') {
    //         state = OUT;
    //     }
    //     if (state == IN) {
    //         state = IN;
    //         putchar(c);
    //     } else if (state == OUT) {
    //         state = IN;
    //         putchar('\n');
    //     }
    // }
    //答案
    int c, state;
    state = OUT;
    while ((c = getchar()) !=  EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {//出现这几个字符才判断是否在单词内。如果在单词内则打印换行符。不在则啥也不干。也就是忽略空格等符号
            if (state == IN) {
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {//是单词外而且不是空格等字符，置状态为IN，输出
            state = IN;
            putchar(c);
        } else {//不是空格等，在单词内部。输出单词
            putchar(c);
        }
    }
    return 0;
}