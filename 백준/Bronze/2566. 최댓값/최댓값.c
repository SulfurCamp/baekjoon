#include <stdio.h>

int main(void) {
	int array[9][9];
	int max_value = 0;
	int max_row = 0, max_col = 0;

	// 9x9 격자판 입력
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &array[i][j]);
			// 최댓값 찾기
			if (array[i][j] > max_value) {
				max_value = array[i][j];
				max_row = i; // 행 번호 저장
				max_col = j; // 열 번호 저장
			}
		}
	}

	// 최댓값 출력
	printf("%d\n", max_value);
	// 위치 출력 (행과 열은 1부터 시작하므로 +1)
	printf("%d %d\n", max_row + 1, max_col + 1);

	return 0;
}