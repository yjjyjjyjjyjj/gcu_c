#include <stdio.h>

struct student{
    int number;
    char name[20];
    double gpa;
}student;

struct student list[]={
    {20120001, "홍길동", 4.2},
    {20120002, "김철수", 3.2},
    {20120003, "김영희", 3.9}
};

int main(void){
    struct student top;
    int i, size;

    size = sizeof(list)/sizeof(list[0]);
    top = list[0];

    for(i=1;i<size;i++){
        if(list[i].gpa > top.gpa){
            top = list[i];
        }
    }
    
    printf("(이름:%s, 학번:%d, 평점:%f)\n",top.name, top.number,top.gpa);
    return 0;
}