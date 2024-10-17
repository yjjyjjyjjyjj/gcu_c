#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char rcp_com();
int who_win(char user_g, char com_g);

int main(void){
    char user_g;
    char com_g;
    srand((unsigned)time(NULL));

    printf("가위: s, 바위: r, 보: p -> ");
    scanf(" %c",&user_g);

    com_g = rcp_com();

    printf("COM : %c \n", com_g);

    int result = who_win(user_g, com_g);

    if(result == 1){
        printf("COM WIN\n");
    }else if(result == 0){
        printf("Human WIN\n");
    }else{
        printf("Draw\n");
    }
    
}

char rcp_com(){
    int i = rand() % 3;
    if(i==0){
        return 'r';
    }else if(i==1){
        return 's';
    }else{
        return 'p';
    }
}

//1 com, 0 human, 2 draw
int who_win(char user_g, char com_g){
    if(user_g == 'r'){
        if(com_g == 's'){
            return 0;
        }else if(com_g == 'r'){
            return 2;
        }else{
            return 1;
        }
    }else if(user_g == 's'){
        if(com_g == 's'){
            return 2;
        }else if(com_g == 'r'){
            return 0;
        }else{
            return 1;
        }
    }else{ //보
        if(com_g == 's'){
            return 1;
        }else if(com_g == 'r'){
            return 0;
        }else{
            return 2;
        }
    }
}