#include <stdio.h>

int main(void)
{
	int N;
	scanf_s("%d", &N);

	if (N >= 1 && N <= 100)
	{
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < i; j++)
				{
					printf("*");
				};
				printf("\n");
			}
		for (int i = N; i > 0; i--)
		{
			for (int j = i; j > 0; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("N�� ������ �߸��Ǿ����ϴ�. Ȯ�����ּ���.");
	}
}