#include <stdio.h>

int main_14681(void) {
	int x, y;
	scanf_s("%d", &x);
	scanf_s("%d", &y);

	if ((x >= -1000 && x <= 1000 && x != 0) && (y >= -1000 && y <= 1000 && y != 0)) {
		if (x > 0 && y > 0) {
			printf("1");
		}
		else if (x < 0 && y > 0) {
			printf("2");
		}
		else if (x < 0 && y < 0) {
			printf("3");
		}
		else {
			printf("4");
		}
	}
}