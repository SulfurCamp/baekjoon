#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int A, B, C;

	scanf("%d %d", &A, &B);

	C = A ^ B;

	printf("%d\n", C);

	return 0;
}