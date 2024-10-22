#include <stdio.h>

int main(void){
    int i=1;
    int factorial = 1;

    while(i<=10){
        factorial *=i;
        i++;
    }

    printf("10!은 %d입니다. \n", factorial);
    return 0;
}