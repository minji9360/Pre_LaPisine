#include <stdio.h>

int main_2741(void) {
	int N;
	scanf_s("%d", &N);

	if (N <= 100000) {
		for (int i = 1; i <= N; i++) {
			printf("%d\n", i);
		}
	}
	else {
		printf("N�� 100,000���� �۰ų� ���� �ڿ����Դϴ�.");
	}
}

// ���� ���� %d ��� �� ���� ������ i�� �Ἥ Ʋ�ȴ�. ���ϴٰ� ����� �� ���� �� �ڵ����� ����..