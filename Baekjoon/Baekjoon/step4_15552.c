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
		printf("T�� 1,000,000 ���Ͽ��� �մϴ�.");
	}
}

// �ڹٿ����� �ð� �ʰ� ��� ���ͼ� ����ߴµ� C�� ���ٸ��� ���ص� �ٷ� �����!