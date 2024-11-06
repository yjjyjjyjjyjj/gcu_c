#include <stdio.h>

int main(void){
    char *p[3] = {"january", "February", "March"};
    int i;

    for(i=0;i<3;i++){
        printf("%d월은 %s입니다.\n", i, p[i]);
    }

    return 0;
}