#include <stdio.h>

int stringLength(char *str){
    int length = 0;
    while(*str != NULL){
        length++;
        str++;
    }
    return length;
}

int main(void){
    char str[] = "Hello, World!";
    printf("문자열의 길이: %d\n", stringLength(str));
    return 0;
}