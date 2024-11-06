#include <stdio.h>
int main(void){
    char str[] = "Hello World!";
    char *p = str;
    while (*p != NULL){
        printf("%c", *p);
        p++;
    }
    printf("\n");
    return 0;
}