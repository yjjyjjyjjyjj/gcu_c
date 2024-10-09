#include <stdio.h>

int main(void){
    int money, price, change;

    printf("고객으로부터 받은 돈 : ");
    scanf("%d", &money);
    printf("물건값: ");
    scanf("%d", &price);

    change = (money - price);
    printf("거스름돈: %d \n", change);
    printf("오천원:\t %d \n", change/5000);
    change = change % 5000;
    printf("천원:\t %d \n", change/1000);
    change = change % 1000;
    printf("오백원:\t %d \n", change/500);
    change = change % 500;
    printf("백원:\t %d \n", change/100);

    return 0;
}