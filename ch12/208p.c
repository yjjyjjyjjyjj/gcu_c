#include <stdio.h>

int main(void){
    long fact=1;
    int i,n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        fact = fact*i;
    }

    printf("%d!은 %ld이다. \n",n,fact);
    
    return 0;
}