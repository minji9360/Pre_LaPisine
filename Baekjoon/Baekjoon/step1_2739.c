#include <stdio.h>

int main_2739(void) {
	int N;
	scanf_s("%d", &N);

	if (N >= 1 && N <= 9) {
		for (int i = 1; i < 10; i++) {
			printf("%d * %d = %d\n", N, i, N * i);
		}
	}
}

// ���� �Է¹��� �� & ���̴� �� ���� ����.