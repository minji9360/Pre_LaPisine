#include <stdio.h>

int main_10952(void)
{
	int A, B;
	scanf_s("%d %d", &A, &B);

	while (!(A == 0 && B == 0))
	{
		printf("%d\n", A + B);
		scanf_s("%d %d", &A, &B);
	}

	return 0;
}

// 조건 (A > 0 && B < 10)을 못 넣었음
// if문으로 넣으려고 했는데 그러면 scanf_s 처음 한 후에 if문 돌리고 while문 안으로 들어가서
// 또 scanf 받았을 때 if문 돌려야하는데 뭔가 이상함..
// 알고리즘이 뭔가 이상한 것 같음.......

// 그리고 while에서 (A != 0 && B != 0)를 넣었었는데 자꾸 하나만 0이 들어가도 종료됨.
// !()로 생각해보니 A != 0 || B != 0 가 맞아서.. 