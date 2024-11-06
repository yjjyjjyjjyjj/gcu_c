#include <stdio.h>

int main(void){
    int x=100;
    int y=200;

    int *p;

    p=&x;
    printf("p의 값=%u\n",p);
    printf("*p의 값=%d\n", *p);

    p=&y;
    printf("p의 값=%u\n",p);
    printf("*p의 값=%d\n", *p);
    
}