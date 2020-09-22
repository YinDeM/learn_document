#include <stdio.h>
/*
* 温度转换程序,F--C 摄氏温度（C）与华氏温度（F）
*/
int main(){
    int fahr;
    printf("\t温度转换器\n");
    for (fahr = 0; fahr <= 300; fahr+=20){
        printf("%d ", fahr);
    }
    return 0;
}