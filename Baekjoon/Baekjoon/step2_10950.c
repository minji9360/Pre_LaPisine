#include <stdio.h>

int main_10950(void) {
	int A, B, T;
	scanf_s("%d", &T);


	for (int i = 1; i <= T; i++) {
		scanf_s("%d %d", &A, &B);
		if (A > 0 && B < 10) {
			printf("%d\n", A + B);
		}
		else {
			printf("���� : 0 < A, B < 10");
		}
	}
}

// ���� �Է� ���� �� & �Է��ϴ°� ���� �ʱ�
// \n ������ �ʱ�. ������ ���Ǳ�� �� ������ �� �� ���� �͵� ���Դ´�. ���Ǳ�� ����.