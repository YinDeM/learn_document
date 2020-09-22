#include <stdio.h>
/*
* 温度转换程序,F--C 摄氏温度（C）与华氏温度（F）
*/
int main(){
    int lower = 0;
    int upper = 300;
    int step = 20;

    float fahr = lower;
    float celsius = 0;
    printf("\t温度转换器\n");
    while (fahr <= upper) {
        celsius = (5.0 * (fahr - 32.0)) / 9.0;
        printf("fahr =%3.0f F\tcelsius =%6.1f C\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}