#include <stdio.h>

int main(void){
    int a;
    for(a=-100; a<=100; a++){
        if((a*a)-(5*a)+6 == 0){
            printf("%d \n",a);
        }
    }

    return 0;
}