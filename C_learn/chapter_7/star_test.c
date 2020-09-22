#include <stdio.h>
#include <ctype.h>

int main(){
    int max = 10;
    char s[] = "asdffsafs\ndasdsad\n";
    int count = printf("%*.*s", 13, max, s);
    printf("%d", count);
    return 0;
}