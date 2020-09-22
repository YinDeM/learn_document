/**
 * 统计输入字符中空格、制表符和换行符的数量
 */

#include <stdio.h>

int main(){
    int space = 0;//32
    int tab = 0;//\t
    int enter = 0;//\n
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' '){
            ++space;
        }
        if (c == '\t'){
            ++tab;
        }
        if (c == '\n'){
            ++enter;
        }
    }

    printf("space = %d, tab = %d, enter = %d", space, tab, enter);

    return 0;
}