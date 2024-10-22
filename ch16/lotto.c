#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int i;
    srand((unsigned)time(NULL));

    for(i=0;i<6;i++){
        printf("%d ", 1+(rand()%45));
    }
    printf("\n");
    return 0;
}