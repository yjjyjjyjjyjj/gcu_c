#include <stdio.h>

int main(void){
    double e_volume;
    double e_raduis = 12742/2;

    double j_volume;
    double j_raduis = 139822/2;

    const double PI = 3.141592;

    e_volume = 4.0*PI*(e_raduis*e_raduis*e_raduis)/3.0;
    printf("지구의 부피 : %f\n",e_volume);

    j_volume = 4.0*PI*(j_raduis*j_raduis*j_raduis)/3.0;
    printf("목성의 부피 : %f\n",j_volume);

    printf("목성의 크기는 지구의 %f개이다.\n",j_volume/e_volume);

    return 0;
}