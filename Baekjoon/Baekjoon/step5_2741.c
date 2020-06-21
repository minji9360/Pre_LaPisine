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
		printf("N은 100,000보다 작거나 같은 자연수입니다.");
	}
}

// 정신 놓고 %d 써야 할 곳에 변수명 i를 써서 틀렸다. 급하다고 제대로 안 보고 막 코딩하지 말자..