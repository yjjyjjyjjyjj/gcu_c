#include <stdio.h>

int main(void){
    FILE *fp1, *fp2;
    int c;

    fp1 = fopen("sample.txt", "r");
    fp2 = fopen("sample1.txt", "w");

    if(fp1== NULL || fp2 == NULL){
        printf("파일 열기 실패\n");
        return 1;
    }

    while((c=fgetc(fp1))!= EOF){
        fputc(c,fp2);
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}