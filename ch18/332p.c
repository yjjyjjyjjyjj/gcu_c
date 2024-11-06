#include <stdio.h>

int main(void){
    int i=10;
    int *p;

    p=&i;

    printf("i의 값=%u\n", i);

    *p=20;
    printf("i의 값=%u\n", i);

    return 0;
}