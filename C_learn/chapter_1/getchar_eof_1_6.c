#include <stdio.h>

int main(){
    int a;
    a = (getchar() != EOF);
    printf("a = %d", a);
    return 0;
}