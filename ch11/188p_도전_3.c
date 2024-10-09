#include <stdio.h>

int main(void){
    int even_sum=0, odd_sum = 0;
    int i=1;
    while(i<=100){
        if(i%2 == 0){
            even_sum += i;
        }else{
            odd_sum += i;
        }
        i++;
    }

    printf("1부터 100까지의 짝수 합 %d, 홀수 합 %d\n",even_sum, odd_sum);
    return 0;
}