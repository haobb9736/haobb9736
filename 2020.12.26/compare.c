#define _CRT_SECURE_NO_WARNINGS 1   

#include<stdio.h>

int main()
{
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b ? a : b) > c ? (a > b ? a : b) : c;
	min = (a < b ? a : b) < c ? (a < b ? a : b) : c;
	printf("三个数从大到小为%d %d %d\n", max, a + b + c - max - min, min);
	return 0;

}
