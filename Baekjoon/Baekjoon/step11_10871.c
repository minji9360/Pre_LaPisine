#include <stdio.h>

int main_10871(void) {
	int N, X, A;
	scanf_s("%d %d\n", &N, &X);

	if (N >= 1 && N <= 10000 && X >= 1 && X <= 10000) {
		for (int j = 1; j <= N; j++) {
			scanf_s("%d", &A);

			if (A < X) {
				printf("%d ", A);
			}
		}
	}
}

// �˰��� ¥�µ� �ð��� ���� �ɸ�
// for���� �ϳ��� �ذ��� �� �ִ� ���̾��µ� ���� for������ �����ó�� ���ڸ� ��� ������ �Ǿ���.