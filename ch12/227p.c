#include <stdio.h>

int main(void){
    int i, students, score;
    int min=1000, max=-1000;
    int sum, avg;

    sum =0;
    do{
        printf("학생수를 입력하시오: ");
        scanf("%d", &students);
    }while(students<1||students>25);

    for(i=0;i<students; i++){
        do{
            printf("%d번째 학생의 성적을 입력하시오: ", i+1);
            scanf("%d", &score);
        }while(score<0 || score>100);

        if(score<min) min=score;
        if(score>max) max=score;
        sum = sum+score;
    }
    avg=sum/students;
    printf("최댓값: %d, 최솟값: %d, 평균값: %d\n",max, min ,avg);

    return 0;
}