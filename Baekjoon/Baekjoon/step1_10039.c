#include <stdio.h>

int main_10039(void)
{
	/*int wonsub, sehui, sangguen, soong, kangsu, score;
	scanf_s("%d", &wonsub);
	scanf_s("%d", &sehui);
	scanf_s("%d", &sangguen);
	scanf_s("%d", &soong);
	scanf_s("%d", &kangsu);
	score = wonsub + sehui + sangguen + soong + kangsu;
	if (score >= 0 && score <= 500 && score % 5 == 0)
	{
		if (wonsub < 40) 
		{
			score += 40;
		}
	}
	else
	{
		printf("���� �Է��� �߸��Ǿ����ϴ�. Ȯ�����ּ���.");
	}*/
	int score;
	int tot = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &score);
		if (score >= 0 && score <= 100 && score % 5 == 0)
		{
			if (score < 40)
			{
				tot += 40;
			}
			else
			{
				tot += score;
			}
		}
		else
		{
			printf("������ �߸��Ǿ����ϴ�. Ȯ�����ּ���.");
			exit();
		}
	}

	printf("%d", tot / 5);
	return 0;
}

// ó������ ���� �̸� �� �� �� �༭ �Ϸ��� �ߴµ�, ���� �׷� �ʿ䰡 ������.
// java�� �� ���� �ϳ��ϳ� �� ��� �� ������..����..
// ��·�� ������ �߸� �Է��ؼ� else�� �Ѿ�� break �ɾ�θ� tot / 5 ���� ����ع�����
// exit() �Լ��� ��µ� ���ؿ����� �������� �׳� break�� �ٲ��.
// ���� ���� ��� �� ������µ�.. �ƿ� ����ó�� ���� ���ƹ����� �ϴٰ� �׳� �״�.
// �����Ϸ��� �� �� �ְ�����,, ������ �� �𸣰ڴ�.