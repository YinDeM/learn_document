#include <stdio.h>

int main(){
    /*int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }*/

    int c = -1;
    printf("%d", EOF);//-1
    printf("%d", (getchar() != EOF));//1
    while ((c = getchar()) != EOF) {
        putchar(c);
    }

    return 0;
}