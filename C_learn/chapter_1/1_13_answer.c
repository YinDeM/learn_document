/**
 * 单词长度的水平直方图
 */

#include <stdio.h>

#define MAXHIST 15      //直方图的最大长度
#define MAXWORD 11      //单词的最大数量
#define IN      1       //单词内
#define OUT     0       //单词外

int main(){
    int c, i, nc, state;
    int len;
    int maxvalue;
    int ovflow;
    int wl[MAXWORD];

    state = OUT;
    nc = 0;
    ovflow = 0;
    for (i = 0; i < MAXWORD; ++i) {//初始化单词长度
        wl[i] = 0;
    }
    for (i = 0; i < MAXWORD; ++i) {//初始化单词长度
        printf("%d", wl[i]);
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            if (nc > 0) {
                if (nc < MAXWORD) {
                    ++wl[nc];//这个长度的单词加1？？
                } else {
                    ++ovflow;
                }
            }
            nc = 0;
        } else if (state == OUT) {
            state = IN;
            nc = 1;
        } else {
            ++nc;//每个单词的字符数
        }
    }
    for (i = 0; i < MAXWORD; ++i) {//初始化单词长度
        printf("%d", wl[i]);
    }
    maxvalue = 0;//单词最大长度
    for (i = 1; i < MAXWORD; ++i) {
        if (wl[i] > maxvalue){
            maxvalue = wl[i];
        }
    }
    for (i = 1; i < MAXWORD; ++i) {
        printf("%5d - %5d :", i, wl[i]);
        if (wl[i] > 0) {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0) {
                len = 1;
            }
        } else {
            len = 0;
        }
        while (len > 0) {
            putchar('*');
            --len;
        }
        putchar('\n');
    }
    if (ovflow > 0) {
        printf("There are %d words >= %d\n", ovflow, MAXWORD);
    }


    return 0;
}