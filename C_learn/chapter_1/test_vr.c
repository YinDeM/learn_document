#include <stdio.h>

int a = 1;
int b = 2;

int main(){
    long ss = 2123323l;
    extern int c;
    c = 4;
    printf("%ld", ss);
    printf("%d", b);
    printf("%d", c);
}

int c = 3;