#include <stdio.h>

int main_11021(void) {
	int T, A, B;
	scanf_s("%d", &T);

	for (int i = 1; i <= T; i++) {
		scanf_s("%d %d", &A, &B);

		if (A > 0 && B < 10) {
			printf("Case #%d: %d\n", i, A + B);
		}
		else {
			printf("���� : 0 < A, B < 10");
		}
	}
}