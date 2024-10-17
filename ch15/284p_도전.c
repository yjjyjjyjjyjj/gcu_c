#include <stdio.h>

int is_prime(int);
void loop_prime(void);

int main(void){
    loop_prime();
    return 0;
}

void loop_prime(){
    printf("1부터 100까지의 소수가 아닌 수를 찾는다.\n");
    for(int i=1; i<=100; i++){
        int tmp = is_prime(i);
        if(tmp == 1){
            printf("%d ",i);
        }
    }
    printf("\n");
}

int is_prime(int n){
    for(int i =2; i<n; i++){
        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}