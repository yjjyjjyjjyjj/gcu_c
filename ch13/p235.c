#include <stdio.h>

#define STUDENTS 5

int main(void){
    int i, sum =0;
    int score[STUDENTS];
    double average;

    for(i=0; i<STUDENTS; i++){
        printf("������ �Է��Ͻʽÿ�: ");
        scanf("%d", &score[i]);
    }

    for(i=0; i<STUDENTS; i++){
        sum += score[i];
    }

    average = (double)sum/STUDENTS;
    printf("���� ���= %f\n",average);

    return 0;
}