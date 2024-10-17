#include <stdio.h>
double FtoC(double temp_f);

int main(void){
    double c,f;
    f=32.0;
    c=FtoC(f);
    printf("화씨온도 %f는 섭씨온도 %f에 해당한다.\n",f,c);
    return 0;
}

double FtoC(double temp_f){
    double temp_c;
    temp_c = (5.0*(temp_f-32.0))/9.0;
    return temp_c;
}