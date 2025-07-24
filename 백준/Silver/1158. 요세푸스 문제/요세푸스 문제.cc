#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 5000

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int queue[MAX];
    int front = 0;
    int rear = N;
    for (int i = 0; i < N; i++) {
        queue[i] = i + 1;
    }

    printf("<");

    int cnt = 0; // 죽인 사람 수
    while (cnt < N) {
        // K-1명을 회전 (맨 앞을 뒤로 보냄)
        for (int i = 1; i < K; i++) {
            queue[rear % MAX] = queue[front % MAX];  // 맨 앞 원소를 뒤에 추가
            front++;
            rear++;
        }

        // K번째 사람 제거 (출력)
        printf("%d", queue[front % MAX]);
        front++;
        cnt++;

        if (cnt < N) printf(", ");
    }

    printf(">\n");
    return 0;
}
