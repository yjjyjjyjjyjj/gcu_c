#include <stdio.h>

int main(void){
    int x = 10, y = 10;
    int result;

    result = ++x;
    printf("++x의 값=%d\n",result);

    result = y++;
    printf("y++의 값=%d\n", result);

    return 0;
}