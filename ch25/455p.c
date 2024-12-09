#include <stdio.h>

int main(void){
    FILE *fp;

    fp=fopen("sample.txt", "w");

    if(fp==NULL){
        printf("파일 열기 실패\n");
        return 1;
    }

    fputs("This is a test \n", fp);
    fputs("This is a sample. \n", fp);

    fclose(fp);
    return 0;
}