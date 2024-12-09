#include <stdio.h>

int main(void){
    FILE *fp;
    int c;

    fp = fopen("sample.txt","r");

    if(fp == NULL){
        printf("파일 열기 실패\n");
        return 1;
    }

    while((c=fgetc(fp)) != EOF){
        fputc(c, stdout);
    }

    fclose(fp);
    
    return 0;
}