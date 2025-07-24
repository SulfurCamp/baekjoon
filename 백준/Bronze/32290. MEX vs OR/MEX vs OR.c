#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int l, r, x;
    scanf("%d %d %d", &l, &r, &x);

    int mex[1024] = { 0 };

    for (int i = l; i <= r; i++) {
        int a = i | x;
        mex[a] = 1;
    }

    for (int i = 0; i < 1024; i++) {
        if (mex[i] == 0) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}
