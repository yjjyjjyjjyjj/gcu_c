#include <stdio.h>

void getSumDiff(int x, int y, int* p_sum, int* p_diff);

int main(void)
{
	int a, b;
	int sum = 0;
	int diff = 0;
	a = 20;
	b = 10;
	
	getSumDiff(a, b, &sum, &diff);
	printf("두 정수의 합:%d\n두 정수의 차:%d", sum, diff);
	return 0;
}

void getSumDiff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}
