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
			printf("A�� B�� �Է� ������ �߸��Ǿ����ϴ�.");
		}
	}
	return 0;
}

// EOP�� ���� ���� �������� Ʋ��
// while ���ǹ��� ������ �ٷ� ���� �� �ִ��� ������. �ֳĸ� EOF�� �������ϱ�..��..��