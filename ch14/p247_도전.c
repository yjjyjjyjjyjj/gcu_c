#include <stdio.h>
#define SIZE 10

int main(void){
    int s[SIZE] = {12,3,19,6,18,8,12,4,1,19};
    int i, maximum;
    maximum = s[0];

    for(i=1; i<SIZE; i++){
        if(s[i]>maximum){
            maximum = s[i];
        }
    }

    printf("최댓값은 %d입니다.\n", maximum);
    return 0;
}