#include <stdio.h>

#define STUDENTS 5

int main(void){
    int i, sum =0;
    int score[STUDENTS];
    double average;

    for(i=0; i<STUDENTS; i++){
        printf("성적을 입력하십시오: ");
        scanf("%d", &score[i]);
    }

    for(i=0; i<STUDENTS; i++){
        sum += score[i];
    }

    average = (double)sum/STUDENTS;
    printf("성적 평균= %f\n",average);

    return 0;
}