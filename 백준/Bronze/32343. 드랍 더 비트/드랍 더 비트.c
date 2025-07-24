#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int N, a, b;
    scanf("%d %d %d", &N, &a, &b);

    int overlap = (a + b > N) ? (a + b - N) : 0;
    int Xcnt = (a + b) - 2 * overlap;

    int result = 0;
    if (Xcnt > 0) {
        result = ((1 << Xcnt) - 1) << (N - Xcnt);
    }

    printf("%d\n", result);
    return 0;
}
