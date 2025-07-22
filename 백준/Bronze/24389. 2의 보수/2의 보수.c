#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int N;
	scanf("%d", &N);
	int K = N ^ (~N + 1);
	int count = 0;
	while (K != 0) {

		K &= (K - 1);
		count++;

	}
	printf("%d\n", count);
	return 0;
}