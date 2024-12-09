#include <stdio.h>

int main(void){
    FILE *fp;
    int c;

    fp =fopen("memo.txt", "a");

    if(fp == NULL){
        printf("파일 열기 실패\n");
        return 1;
    }

    while((c=getchar()) != EOF){
        fputc(c,fp);
    }

    fclose(fp);
    return 0;
}