#include <stdio.h>
/*
* 温度转换程序,C--F 摄氏温度（C）与华氏温度（F）
*/
int main(){
    int lower = 0;
    int upper = 300;
    int step = 20;

    float celsius = lower;
    float fahr = 0;
    printf("\t温度转换器\n");
    while (celsius <= upper) {
        fahr = (9 * celsius) / 5 + 32;
        printf("celsius =%3.0f C\t fahr =%6.1f F\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}