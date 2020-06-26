#include <stdio.h>

int main_10817(void)
{
	int A, B, C;
	scanf_s("%d %d %d", &A, &B, &C);

	if (A <= B && A <= C)
	{
		if (B >= C)
		{
			printf("%d", C);
		}
		else if (B < C)
		{
			printf("%d", B);
		}
	}
	else if (B <= A && B <= C)
	{
		if (A >= C)
		{
			printf("%d", C);
		}
		else if (A < C)
		{
			printf("%d", A);
		}
	}
	else
	{
		if (A >= B)
		{
			printf("%d", B);
		}
		else if (A < B)
			printf("%d", A);
	}

	return 0;
}