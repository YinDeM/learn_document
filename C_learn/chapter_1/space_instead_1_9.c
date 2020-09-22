/**
 * 输入复制到输出并将多个空格用一个空格代替
 * 没做出来、、、想不到啊，裂开
 */

#include <stdio.h>

#define NONBLANK 'a'

int main(){
    char flag = 'a';
    int c;
    while ((c = getchar()) != EOF) {
        if (c != 32) {//不是空格正常打印
            putchar(c);
        }
        if (c == 32) {
            if (flag != 32) {//空格的上一个不是空格时打印空格，是则跳过
                putchar(c);
            }
        }
        flag = c;//标识上一个字符是不是空格
    }
    // int c, lastc;

    // lastc = NONBLANK;
    // while ((c = getchar()) != EOF) {
    //     if (c != ' ') {
    //         putchar(c);
    //     }
    //     if (c == ' ') {
    //         if (lastc != ' ') {
    //             putchar(c);
    //         }
    //     }
    //     lastc = c;
    // }
    return 0;
}