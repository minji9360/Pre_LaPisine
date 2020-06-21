#include <stdio.h>

int main_11022(void) {
	int T, A, B;
	scanf_s("%d", &T);

	for (int i = 1; i <= T; i++) {
		scanf_s("%d %d", &A, &B);

		if (A > 0 && B < 10) {
			printf("Case #%d: %d + %d = %d\n", i, A, B, A+B);
		}
		else {
			printf("¹üÀ§ : 0 < A, B < 10");
		}
	}
}