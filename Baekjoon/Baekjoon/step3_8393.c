#include <stdio.h>

int main_8393(void) {
	int n, sum = 0;

	scanf_s("%d", &n);
	
	if (n >= 1 && n <= 10000) {
		for (int i = 1; i <= n; i++) {
			sum += i;
		}
		printf("%d", sum);
	}
}

// sum �ʱ�ȭ ���ִ� �� ���� ����