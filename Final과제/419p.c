#include <stdio.h>

struct student{
    int number;
    char name[20];
    double gpa;
};

int main(void){
    struct student s = {1, "홍길동", 4.3};
    struct student *p;

    p=&s;

    printf("학번=%d, 이름=%s 학점=%f\n", s.number, s.name, s.gpa);
    printf("학번=%d, 이름=%s 학점=%f\n", (*p).number, (*p).name, (*p).gpa);
    printf("학번=%d, 이름=%s 학점=%f\n", p->number, p->name, p->gpa);
}