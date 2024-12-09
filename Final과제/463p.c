#include <stdio.h>
#include <string.h>

#define MAX_SIZE 10000
int main(void){
    FILE *file1, *file2;
    char filename1[100];
    char filename2[100];

    char buffer1[MAX_SIZE];
    char buffer2[MAX_SIZE];
    char *p1, *p2;
    int copy=1;

    printf("리포트 #1 파일 이름: ");
    scanf("%s", filename1);
    printf("리포트 #2 파일 이름: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");
    if(file1 == NULL || file2 == NULL){
        printf("파일 열기 오류\n");
        return 1;
    }
    while(1){
        p1=fgets(buffer1, MAX_SIZE, file1);
        p2=fgets(buffer2, MAX_SIZE, file2);
        if(p1 == NULL || p2 ==NULL){
            copy=0;
            break;
        }
        if(strcmp(buffer1, buffer2) != 0){
            copy=0;
            break;
        }
    }
    if(copy == 1){
        printf("2개의 리포트는 동일합니다.\n");
    }else{
        printf("2개의 리포트는 동일하지 않습니다. \n");
    }
    
    fclose(file1);
    fclose(file2);
    return 0;
}