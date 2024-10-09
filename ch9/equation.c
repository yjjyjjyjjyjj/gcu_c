#include <stdio.h>
#include <math.h>

int main(void){
    double a,b,c,dis,value;
    printf("계수 a를 입력하시오: ");
    scanf("%lf", &a);
    printf("계수 b를 입력하시오: ");
    scanf("%lf", &b);
    printf("계수 c를 입력하시오: ");
    scanf("%lf", &c);

    if(a==0){
        printf("방정식의 근은 %f입니다.", -c/b);
    }else{
        dis = b*b - 4.0*a*c;
        if(dis > 0){
            value = sqrt(dis);
            printf("방정식의 근은 %f입니다.\n", (-b+value)/(2.0*a));
            printf("방정식의 근은 %f입니다.\n", (-b-value)/(2.0*a));
        }else if(dis == 0){
            printf("방정식의 근은 %f입니다.\n", (-b)/(2.0*a));
        }else{
            printf("실근이 존재하지 않습니다.\n");
        }

        return 0;
    }
}