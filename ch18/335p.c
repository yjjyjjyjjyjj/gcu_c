#include <stdio.h>

int main(void){
    char *pc;
    short *ps;
    int *pi;

    pc = (char *)10000;
    ps = (short *)10000;
    pi = (int *)10000;
    printf("증가 전 pc = %d, ps = %d, pi = %d\n",pc,ps,pi);

    pc++;
    ps++;
    pi++;
    printf("증가 후 pc = %d, ps = %d, pi = %d\n",pc,ps,pi);

    return 0;
}