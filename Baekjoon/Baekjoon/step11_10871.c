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

// 알고리즘 짜는데 시간이 조금 걸림
// for문을 하나로 해결할 수 있는 것이었는데 이중 for문으로 별찍기처럼 숫자를 찍는 형식이 되었다.