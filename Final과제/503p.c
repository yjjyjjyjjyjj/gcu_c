#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void){
    FILE* infile;
    char line[121];
    char* info = NULL;
    int len;
    int total_size = 0;

    //파일 열기
    infile = fopen("proverbs.txt", "r");
    if(infile == NULL){
        printf("파일 열기 오류!\n");
        return 1;
    }

    //파일을 한 줄씩 읽어서 info에 저장
    while(fgets(line, sizeof(line), infile)){
        len = strlen(line);
        total_size += len;

        //info 메모리 재할당
        char* temp = (char*)realloc(info, total_size +1);
        if(temp == NULL){
            printf("메모리 할당 오류!\n");
            free(info); //기존 할당된 메모리 해제
            return 1;
        }
        info = temp;

        //info에 새로운 줄 추가
        if(total_size == len){
            strcpy(info, line); //info가 초기화되지 않았으므로 strcpy 사용
        }else{
            strcat(info, line); //info가 이미 초기화 되었으므로 strcat 사용
        }
    }

    fclose(infile); //파일 닫기
    if(info != NULL){
        printf("%s\n", info);
        free(info);
    }
    return 0;
}