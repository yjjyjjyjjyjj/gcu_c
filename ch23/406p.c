#include <stdio.h>
#include <string.h>

struct student {
    int number;
    char name[10];
    double gpa;
};

int main(void){
    struct student s;

    s.number = 20140001;
    strcpy(s.name, "홍길동");
    s.gpa = 4.3;

    printf("학번:%d\n", s.number);
    printf("이름:%s\n", s.name);
    printf("평점: %f\n", s.gpa);

    return 0;
}