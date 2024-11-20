#include <stdio.h>

// 점을 나타내는 구조체 정의
struct point {
    int x; // x 좌표
    int y; // y 좌표
};

// 두 점을 비교하는 함수
int equal(struct point* p1, struct point* p2) {
    if (p1->x == p2->x && p1->y == p2->y) {
        return 1; // 좌표가 같으면 1 반환
    }
    else {
        return 0; // 좌표가 다르면 0 반환
    }
}

int main() {
    struct point point1, point2; // 두 점 선언

    // 첫 번째 점의 좌표 입력
    printf("첫 번째 점의 x, y 좌표를 입력하세요: ");
    scanf("%d %d", &point1.x, &point1.y);

    // 두 번째 점의 좌표 입력
    printf("두 번째 점의 x, y 좌표를 입력하세요: ");
    scanf("%d %d", &point2.x, &point2.y);

    // equal 함수 호출 및 결과 출력
    if (equal(&point1, &point2)) {
        printf("두 점의 좌표는 같습니다.\n");
    }
    else {
        printf("두 점의 좌표는 다릅니다.\n");
    }

    return 0;
}
