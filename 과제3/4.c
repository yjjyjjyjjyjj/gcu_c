/*
4. 2차원 평면에서 점은 (x,y) 좌표로 나타낼 수 있다. 하나의 점을 point 라는 구조체로 정의하고, 

이 point 구조체를 받아서 두점의 좌표가 일치하면 1일 반환하고 그렇지 않으면 0을 반환하는 

함수 int eaual(struct point *p1, struct point *p2)를 작성하고 테스트 하라. 
*/

#include <stdio.h>
struct point
{
    int x;
    int y;
};

int equal(struct point *p1, struct point *p2);

int main(void){
    struct point p1, p2;
    printf("첫번째 두 점 입력: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("두번째 두 점 입력: ");
    scanf("%d %d", &p2.x, &p2.y);

    struct point *point1, *point2;
    point1 = &p1;
    point2 = &p2;
    int result = equal(point1, point2);
    if(result == 1){
        printf("두 점의 좌표가 같습니다.");
    }else{
        printf("두 점의 좌표가 다릅니다.");
    }

    return 0;
}

int equal(struct point *p1, struct point *p2){
    if((*p1).x != (*p2).x){
        return 0;
    }
    if((*p1).y != (*p2).y){
        return 0;
    }
    return 1;
}