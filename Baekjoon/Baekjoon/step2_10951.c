#include <stdio.h>

int main_10951(void)
{
	int A, B;

	//while (1)
	while(scanf_s("%d %d", &A, &B) != EOF)
	{
		//scanf_s("%d %d", &A, &B);
		if (A > 0 && B < 10) {
			printf("%d\n", A + B);
		}
		else
		{
			printf("A와 B의 입력 범위가 잘못되었습니다.");
		}
	}
	return 0;
}

// EOP에 대한 개념 부족으로 틀림
// while 조건문에 저렇게 바로 넣을 수 있는지 몰랐음. 왜냐면 EOF를 몰랐으니까..ㅎ..ㅠ