#include <stdio.h>

int main_9498(void) {
	int score;
	scanf_s("%d", &score); // ���ؿ����� scanf_s ��� X scanf ��� O

	if(score<=100 && score>=90) {
		printf("A");
	}
	else if (score >= 80) {
		printf("B");
	}
	else if (score >= 70) {
		printf("C");
	}
	else if (score >= 60) {
		printf("D");
	}
	else {
		printf("F");
	}
}