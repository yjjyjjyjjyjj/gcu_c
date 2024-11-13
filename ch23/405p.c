#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

int main(void){
    struct point p1, p2;
    double xdiff, ydiff;
    double dist;

    printf("첫 번째 점의 좌표: ");
    scanf("%d%d", &p1.x, &p1.y);
    printf("두 번째 점의 좌표: ");
    scanf("%d%d", &p2.x, &p2.y);

    xdiff = (double)(p1.x - p2.x);
    ydiff = (double)(p1.y - p2.y);

    dist = sqrt(xdiff*xdiff + ydiff * ydiff);
    printf("거리는 %f입니다. \n", dist);

    return 0;
}