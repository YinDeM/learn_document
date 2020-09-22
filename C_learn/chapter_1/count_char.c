#include <stdio.h>

int main(){
    int nc = 0;
    int c;
    /*while (getchar() != EOF) {
        ++nc;
    }*/
    // for (; getchar() != EOF; ++nc){

    // }
    //行计数
    while ((c = getchar()) != EOF) {
        if (c == '\n') {//等于号写成了赋值。耻辱。绝对是耻辱
            ++nc;
        }
    }
 

    printf("nc = %d", nc);
    return 0;
}