#include <stdio.h>

int countWords(char* str){
    int count=0;
    int inWord=0;

    while(*str){
        if(*str == ' '){
            inWord = 0;
        }
        else if(!inWord){
            inWord =1;
            count++;
        }
        str++;
    }
    return count;
}

int main(void){
    char str[] = "Hello World Welcome to C programming";

    printf("단어 개수: %d\n", countWords(str));

    return 0;
}