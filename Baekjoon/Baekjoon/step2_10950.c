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
			printf("범위 : 0 < A, B < 10");
		}
	}
}

// 숫자 입력 받을 때 & 입력하는거 잊지 않기
// \n 빼먹지 않기. 문제를 주의깊게 안 읽으니 한 줄 띄우는 것도 빼먹는다. 주의깊게 읽자.