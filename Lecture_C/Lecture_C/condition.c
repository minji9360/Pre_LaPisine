#include <stdio.h>
#include <time.h>

int main_condition(void) 
{
	// ������ ź�ٰ� ����. �л�/�Ϲ������� ���� (�Ϲ��� : 20��)
	/*int age = 15;
	if (age >= 20)
		printf("�Ϲ����Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");
	return 0;*/
	
	// �ʵ��л� (8~13) / ���л�(14~16) / ����л�(17~19)���� ������?
	// 1. if / else if / else
	/*int age = 48;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if (age >= 17 && age <= 19) 
	{
		printf("����л��Դϴ�.\n");
	}
	else 
	{
		printf("�л��� �ƴѰ�����.\n");
	}*/
	
	// 2. break / continue
	// 1) 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
	/*for (int i = 1; i <= 30; i++) 
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������.\n", i);
			break;
		}
		printf("%d �� �л��� ���� ��ǥ�� �غ��ϼ���.\n", i);
	};*/

	// 2) 1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	//    7�� �����ϰ� 6������ 10������ ���� ��ǥ�� �ϼ���.
	/*for (int i = 1; i <= 30; i++) 
	{
		if (i == 7) 
		{
			printf("7���� �����Դϴ�.\n");
		}
		else if (i >= 6 && i <= 10) 
		{
			printf("%d ���� ���� ��ǥ�� �ϼ���.\n", i);
		}
		else
		{
			printf("������ �л��� ���� ������.\n");
		}
	}*/
	// ���ǿ��� ���� ��?
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if(i == 7) 
	//		{
	//			printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
	//			continue; // ���⼭ ���߰� ���� ������ �������� �ʴ´�. �������� �Ѿ
	//		}
	//	}
	//	printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���.\n", i);
	//}
	// �ٸ� �� : �� �ϳ��� if������ �ذ��ߴµ�, ���⼭�� ��ø if������ �� ���� ���� �ذ��� ����
	//			 6~10 �߿��� 7�� ���ܴϱ� ����ó�� �� ��������? �� ���ƺ���. continue�� Ȱ���ϰ�

	// 3. &&, ||
	/*int a = 11;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a�� b, �Ǵ� c�� d�� ���� �����ϴ�.\n");
	}
	else
	{
		printf("���� ���� �ٸ��׿�\n");
	}*/

	// 4. Switch case
	// 1) ���������� - if
	/*srand(time(NULL));
	int i = rand() % 3; // 0~2 ��ȯ
	if (i == 0)
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("�����\n");
	}*/

	// 2) ���������� - switch
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i) 
	{
	case 0:printf("����\n"); break;
	case 1:printf("����\n");
	case 2:printf("��\n");
	default:printf("�����\n");
	}*/
	// switch ���̽������� �� ��츶�� break �־���� ��
	// ���� i�� 0�̸� case 0�� ����ϰ� �� �Ʒ��δ� ���� Ȯ������ �ʰ� ������ �����
	// break���� �ش� ��쿡 ���� switch ������ ����� �� Ż���ϵ��� ��

	//int age = 15;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13: printf("�ʵ��л��Դϴ�.\n"); break; // break�� ���ָ� break �ִ� ������ ��� ����ϴϱ�
	//case 14:
	//case 15:
	//case 16: printf("���л��Դϴ�.\n"); break;
	//case 17:
	//case 18:
	//case 19: printf("����л��Դϴ�.\n"); break;
	//default: printf("�л��� �ƴѰ�����.\n"); break;
	//}

	// 4. ������Ʈ Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; // ����
	int chance = 5; // ��ȸ
	while (chance > 0)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("DOWNN \n\n");
		}
		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�!\n\n");
			break;
		}
		else {
			printf("�� �� ���� ������ �߻��Ͽ����ϴ�.\n\n");
		}

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�.\n\n");
			break;
		}
	}
	return 0;
}