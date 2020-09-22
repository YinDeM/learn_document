#include <stdio.h>
/**
 * 替换字符,,,回退符怎么输入？？？
 */
int main(){
    int c;
    while ((c = getchar()) != EOF) {

        if (c == '\t'){
            putchar('\\');
            putchar('t');
            continue;
        }
        if (c == '\b'){
            putchar('\\');
            putchar('b');
            continue;
        }
        if (c == '\\'){
            putchar('\\');
            putchar('\\');
            continue;
        }
        putchar(c);
    }
    return 0;
}