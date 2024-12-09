#include <stdio.h>
#include <stdlib.h>

struct Book{
    char title[50];
    char author[30];
    int price;
};

int main(void){
    int i,count;
    struct Book *books;

    printf("책을 얼마나 가지고 계신가요?");
    scanf("%d", &count);
    getchar();

    books=(struct Book *)malloc(count*sizeof(struct Book));
    if(books == NULL){
        printf("메모리 할당 오류 \n");
        exit(1);
    }

    for(i=0; i<count; i++){
        printf("%d번째 책의 이름", i+1);
        gets_s(books[i].title, 50);
        printf("책의 저자: ");
        gets_s(books[i].author, 30);
        printf("책의 가격:");
        scanf("%d", &books[i].price);
        getchar();
    }

    printf("\n\n소장하고 있는 책을 출력합니다.\n");
    for(i=0;i<count;i++){
        printf("===========================\n");
        printf("%d번째 책: %s \n", i+1, books[i].title);
        printf("저자: %s \n",books[i].author);
        printf("가격: %d \n",books[i].price);
        printf("===========================\n");
    }
    free(books);
    return 0;
    
}