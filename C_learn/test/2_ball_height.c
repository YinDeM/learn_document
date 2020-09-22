/** 
 * 题目2：一球从100米高度自由落下，每次落地后反跳回原高度的一半；
 * 再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
 */

#include <stdio.h>

#define MAX 100

int main(){
    int height = MAX;
    double ten = 0;
    double all_meter = 0;//十次的总米数
    double step = 100;
    for (int i = 1; i <= 10; ++i) {//落地次数10
        if (i == 1) {//第一次落地
            all_meter = step;
            continue;
        }
        step = step / 2;//第二次落地
        if (i == 10) {
            ten = step;
            printf("第%d次的高度：%f\n", i, ten);
        }
        all_meter = all_meter + step * 2;
    }
    printf("总米数：%f\n", all_meter);
    return 0;
}

// main()
// {
//     float sn=100.0,hn=sn/2;
//     int n;
//     for(n=2;n<=10;n++){
//         sn=sn+2*hn;/*第n次落地时共经过的米数*/ 　　
//         hn=hn/2; /*第n次反跳高度*/ 　
//     }
//         printf("the total of road is %f\n",sn);
//         printf("the tenth is %f meter\n",hn);
// }

