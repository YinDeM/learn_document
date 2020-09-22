#include <stdio.h>
/*
* 温度转换程序,F--C 摄氏温度（C）与华氏温度（F）
*/
int main(){
    int fahr;
    printf("\t温度转换器\n");
    for (fahr = 300; fahr >= 0; fahr-=20){
        printf("%d %d\n", fahr, (5 * (fahr - 32)) / 9);
    }
    return 0;
}