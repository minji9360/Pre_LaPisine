#include <stdio.h>

int main_2742(void) {
	int N;
	scanf_s("%d", &N);

	if (N <= 100000) {
		for (N; N >= 1; N--) {
			printf("%d\n", N);
		}
	}
	else {
		printf("N�� 100,000���� �۰ų� ���� �ڿ����Դϴ�.");
	}
}