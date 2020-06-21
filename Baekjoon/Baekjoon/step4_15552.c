#include <stdio.h>

int main_15552(void) {
	int T, A, B;
	scanf_s("%d", &T);

	if (T >= 0 && T <= 1000000) {
		for (int i = 0; i < T; i++) {
			scanf_s("%d %d", &A, &B);
			printf("%d\n", A + B);
		}
	}
	else {
		printf("T는 1,000,000 이하여야 합니다.");
	}
}

// 자바에서는 시간 초과 계속 나와서 고생했는데 C는 별다른거 안해도 바로 통과네!