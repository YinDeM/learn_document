/**
 * 题目3：一个5位数，判断它是不是回文数。
 * 即12321是回文数，个位与万位相同，十位与千位相同。
 * 取出四个数据对比，怎么取数据。存数组里
 */

#include <stdio.h>

int main(){
    char c;
    // while ((c = getchar()) != '\n') {

    // }
    int a[5];
    for (int i = 0; i < 5; ++i) {
        c = getchar();
        a[i] = c - '0';
        putchar(c);
    }
    printf("\n");
    if (a[0] == a[4] && a[1] == a[3]) {
        printf("%d%d%d%d%d是回文数！", a[0], a[1], a[2], a[3], a[4]);
    } else {
        printf("不是回文数！");
    }

    return 0;
}

// main( )
// {
//     long ge,shi,qian,wan,x;
//     scanf("%ld",&x);
//     wan=x/10000;
//     qian=x%10000/1000;
//     shi=x%100/10;
//     ge=x%10;
//     if (ge==wan&&shi==qian)/*个位等于万位并且十位等于千位*/ 　
//         printf("this number is a huiwen\n");
//     else
//         printf("this number is not a huiwen\n");
// }