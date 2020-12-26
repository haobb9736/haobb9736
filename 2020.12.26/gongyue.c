#define _CRT_SECURE_NO_WARNINGS 1   

#include<stdio.h>

int main()
{
	int a, b,n,i;
	scanf("%d %d", &a, &b);
	n = a < b ? a : b;
	for (i = 0; i < n; n--)
	{
		if (a%n == 0 && b%n == 0)
		{
			printf("最大公约数为：%d\n", n);
			break;
		}

	}
	return 0;
}
