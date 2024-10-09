#include <stdio.h>

int main(void){
    int n,i;
    printf("양의 정수를 입력하시오: ");
    scanf("%d", &n);
    printf("%d의 약수는 다음과 같습니다. \n",n);
    
    for(i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }

    return 0;
}