#include <stdio.h>

#define SIZE 11

int main(void){
    int freq[SIZE] = {0};
    int i, candidate;

    while(1){
        printf("�� �� �������� �����Ͻðڽ��ϱ�? (���� -1): ");
        scanf("%d", &candidate);
        if(candidate < 0) break;
        freq[candidate]++;
    }

    printf("�� ��ǥ���\n");

    printf("���        ��      ������׷�  \n");
    for(i=1;i<SIZE;i++){
        printf("%3d     %3d     ", i, freq[i]);
        for(int j=1; j<=freq[i]; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}