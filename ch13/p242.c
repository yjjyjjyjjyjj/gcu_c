#include <stdio.h>
#define SIZE 10

int main(void){
    int seat_number,i;
    int seats[SIZE] = { 0 };

    while (1)
    {
        printf("------------------------------------------\n");
        printf("    1   2   3   4   5   6   7   8   9   10\n");
        printf("------------------------------------------\n");

        for(i=0; i<SIZE; i++){
            printf("    %d",seats[i]);
        }
        printf("\n");

        printf("���Ͻô� �¼���ȣ�� �Է��ϼ���(����� -1): ");
        scanf("%d", &seat_number);

        if(seat_number < 0){break;}

        if(seat_number <= 0 || seat_number > SIZE){
            printf("1���� 10 ������ ���ڸ� �Է��ϼ���\n");
            continue;
        }

        if(seats[seat_number-1] == 0){
            seats[seat_number-1] = 1;
            printf("����Ǿ����ϴ�. \n\n");
        }else{
            printf("�̹� ����� �ڸ��Դϴ�.\n\n");
        }
    }

    return 0;
    
}