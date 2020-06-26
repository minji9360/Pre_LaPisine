#include <stdio.h>

int main_1110(void)
{
	int N, num, sum;
	int cnt = 0;
	scanf_s("%d", &N);

	if (N >= 0 && N <= 99)
	{
		num = (N / 10) + (N % 10);
		sum = 10 * (N % 10) + (num % 10);
		cnt++;

		while (N != sum) 
		{
			num = (sum / 10) + (sum % 10);
			sum = 10 * (sum % 10) + (num % 10);
			cnt++;
		}
		printf("%d", cnt);
	}
	else
	{
		printf("N은 0보다 크거나 같고, 99보다 작거나 같은 정수입니다.");
	}
	return 0;
}

// 했던 문제인데도 한 달만에 하려니 어떻게 짜는지 잊었다.
// 머리로만 규칙을 파악하려니 조금 힘들어서 예시 문제로 손으로 써가며 규칙을 찾고 알고리즘을 짰다.
// 확실히 손으로 쓰면서 하니 이해가 잘 되고 규칙을 찾기 쉬운 것 같다. 다음에도 써먹어야지.