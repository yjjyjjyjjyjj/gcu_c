#include <stdio.h>
typedef struct {int x; int y;}POINT;
int equal(POINT *p1, POINT *p2);

int main(void){
    POINT p1 = {3,4};
    POINT p2 = {3,4};
    if(equal(&p1, &p2)){
        printf("두 점은 같습니다.\n");
    }else{
        printf("두 점은 다릅니다.\n");
    }
    return 0;
}

int equal(POINT *p1, POINT *p2){
    if(p1->x == p2->x && p1->y == p2->y){
        return 1;
    }else{
        return 0;
    }
}