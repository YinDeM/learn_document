#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define AUDIO_VOLUME_CFG_PATH        "/home/ts/test.cfg"
int main(){
    FILE *fp = NULL;
    static char s_line[128];
    fp = fopen(AUDIO_VOLUME_CFG_PATH, "r");
    while (NULL != fgets(s_line, 128, fp)) {
        printf("%s", s_line);
    }
    return 0;
}