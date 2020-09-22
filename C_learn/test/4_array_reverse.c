/**
 * 题目4：将一个数组逆序输出。
 */

#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5};

    for (int i = 4; i >= 0; --i) {
        printf("%d", a[i]);
    }

    return 0;
}

// #define N 5
// main()
// { 
//     int a[N]={9,6,5,4,1},i,temp;
//     printf("\n original array:\n");
//     for(i=0;i<N;i++)
//     printf("%4d",a[i]);
//     for(i=0;i<N/2;i++){
//         temp=a[i];
//         a[i]=a[N-i-1];
//         a[N-i-1]=temp;
//     }
//     printf("\n sorted array:\n");
//     for(i=0;i<N;i++)
// 　      printf("%4d",a[i]);
// }