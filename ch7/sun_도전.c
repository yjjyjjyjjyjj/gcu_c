#include <stdio.h>
int main(void){
    double light_speed = 300000;
    long time = 60*60*24*365;

    double distance;

    distance = light_speed*time;

    printf("빛의 속도는 %.fkm/s \n", light_speed);
    printf("1년을 초로 환산하면 %ld초 \n", time);
    printf("빛이 1년동안 가는 거리: %.fkm \n", distance);

    return 0;
}