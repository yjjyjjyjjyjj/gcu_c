#include <stdio.h>

// 특정 문자의 개수를 세는 함수
int Str_Chr(char* s, int c) {
    int count = 0; // 문자의 개수를 저장할 변수
    for (int i = 0; s[i] != '\0'; i++) { // 문자열 끝('\0')까지 반복
        if (s[i] == c) { // 문자가 일치하면
            count++; // 개수를 증가
        }
    }
    return count;
}

int main() {
    char str[100]; // 문자열 입력을 위한 배열
    char ch;       // 찾을 문자
    int result;    // 결과값 저장

    // 사용자 입력
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin); // 문자열 입력 (공백 포함)

    printf("개수를 셀 문자를 입력하세요.: ");
    scanf(" %c", &ch); // 한 글자 입력 (앞의 공백은 개행문자 방지)

    // 함수 호출
    result = Str_Chr(str, ch);

    // 결과 출력
    printf("%c의 개수는 %d입니다.\n", ch, result);

    return 0;
}
