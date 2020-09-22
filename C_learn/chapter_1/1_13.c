/**
 * 打印输入中单词长度的直方图,水平方向的。
 */

#include <stdio.h>

#define IN 1        //在单词外
#define OUT 0       //在单词内

int main(){
    int num = 1;
    int count = 0;
    int c, state;
    state = OUT;
    while ((c = getchar()) !=  EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                for (int i = 0; i < count; ++i) {
                    printf("=");
                }
                count = 0;
                putchar('\n');
                state = OUT;
            }
        } else if (state == OUT) {
            state = IN;
            
            printf("%d", num);
            num++;
            ++count;
        } else {
            count++;
        }
    }
    return 0;
}