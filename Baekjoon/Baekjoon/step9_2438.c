#include <stdio.h>

int main_2438(void) {
	int N;
	scanf_s("%d", &N);

	if (N >= 1 && N <= 100) {
		for(int i = 1; i <= N; i++){
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}