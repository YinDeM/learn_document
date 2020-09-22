/**
 * 题目7：有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），
 * 计算出平均成绩，况原有的数据和计算出的平均分数存放在磁盘文件"stud"中。
 * 1 yin 90 89 78
 * 2 de 56 76 45
 * 3 ming 23 34 78
 * 4 shi 21 32 56
 * 5 ren 52 98 67
 */

#include <stdio.h>

int main(){
    char s1[100];
    char s2[100];
    char s3[100];
    char s4[100];
    char s5[100];
    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);
    fgets(s3, 100, stdin);
    fgets(s4, 100, stdin);
    fgets(s5, 100, stdin);

    int number;
    char name[20];
    int math;
    int chinese;
    int english;
    
    printf("%s%s%s%s%s", s1, s2, s3, s4, s5);

    sscanf(s1, "%d %s %d %d %d", &number, name, &math, &chinese, &english);
    printf("number=%d\nname=%s\nmath=%d\nchinese=%d\nenglish=%d\n",number, name, math, chinese, english);

    return 0;
}