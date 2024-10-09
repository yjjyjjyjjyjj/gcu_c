#include <stdio.h>

int main(){
    int age;
    float height;
    char gender;

    //학생 정보 입력받기
    printf("당신의 나이는 몇살입니까? ");
    scanf("%d", &age);

    printf("당신의 키는 몇 cm입니까? ");
    scanf("%f", &height);

    printf("당신의 성별은 무엇인가요(M 또는 F)? ");
    getchar();
    scanf("%c", &gender);

    printf("\n입력된 학생 정보:\n");
    printf("나이: %d\n", age);
    printf("키: %.2f\n", height);
    printf("성별: %c\n", gender);
    return 0;
}