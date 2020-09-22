#include <stdio.h>
int main(){
    char c;
    while ((c = getchar()) != '1') {
        putchar(c);
    }
    return 0;
}