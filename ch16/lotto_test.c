#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    srand((unsigned)time(NULL));

    int arr[10] = { 0 };
    printf("행운권 : ");

    for(int i=0; i<3; i++){
        int h;
        do{
            h = (rand() % 10)+1;
        }while(arr[h]!=0);

        printf("%d ", h);
        arr[h] = 1;
    }

    return 0;
    
}