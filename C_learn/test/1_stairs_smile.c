/**
 * 题目1：打印楼梯，同时在楼梯上方打印两个笑脸。
 * 程序分析：用 ASCII 1 来输出笑脸。
 * |_
 *   |_
 *     |_
 *       |_
 */

#include <stdio.h>

int main(){
    printf("%c%c\n", 1, 1);//soh start of head .windows是笑脸？

    for (int i = 1; i <= 10; ++i) {
        printf("|_\n");
        for (int j = 1; j <= i; ++j) {
            printf("  ");
            if (j == 10) {
                printf("\n");
            }
        }
    }
    return 0;
    // {
    // int i,j;
    // printf("\1\1\n");/*输出两个笑脸*/
    // for(i=1;i<11;i++){
    //     for(j=1;j<=i;j++)
    //         printf("%c%c",219,219);
    //     printf("\n");
    // }
}