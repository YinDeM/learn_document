#include <stdio.h>

int power(int m, int n);

int main(){
    printf("1:%d\n2:%d\n3:%d\n", power(12, 1), power(4, 3), power(12, 0));
    return 0;
}

int power(int m, int n){
    int ret = 1;
    if (m == 0){
        return 0;
    }
    if (n == 0 || m == 1) {
        return 1;
    }
    if (n == 1) {
        return m;
    }
    for (int i = 1; i <= n; i++) {
        ret = ret * m;
    }
    return ret;
}