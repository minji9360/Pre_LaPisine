#include <stdio.h>
int main_printfscanf(void)
{
	// 1. ����, ���, �����
	// 1) ������ ������ ���� ���� - ���� : ���ϴ� ��
	/* int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age); */

	// 2) �Ǽ��� ������ ���� ����
	/*float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);*/

	// 3) ����� ���� ���� - ��� : ������ �ʴ� ��. �� �� �����ϸ� ��. �� ������ �ٲ� �� X
	/*const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);*/
	// YEAR = 2001;

	// 4) printf ����
	// ����
	// int add = 3 + 7; // 10
	// printf("3 + 7 = %d\n", add);
	// printf("%d + %d = %d\n", 377, 799, 377 + 799);

	// 5) scanf ����
	// Ű���� �Է��� �޾Ƽ� ����
	// (1) ����
	/*int input;
	printf("���� �Է��ϼ���. : ");
	scanf_s("%d", &input);
	printf("�Է°� : %d\n", input);*/

	//int one, two, three;
	/*printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	// (2) ����(�� ����), ���ڿ�(�� ���� �̻��� ���� ����)
	/*char c = 'A';
	printf("%c\n", c);*/

	/*char str[256];
	scanf_s("%s", str, sizeof(str));
	printf("%s\n", str);*/

	// 6) ������Ʈ
	// �������� �������� ������ �Լ� (���� �ۼ�)
	// �̸�? ����? ������? Ű? ���˸�?
	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("�� ���̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg �̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� �� cm ����??");
	scanf_s("%lf", &height);

	char crime[256];
	printf("���˸��� ������? ");
	scanf_s("%s", crime, sizeof(crime));

	// ���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�    : %s\n", name);
	printf("����    : %d��\n", age);
	printf("������  : %.2fkg\n", weight);
	printf("Ű      : %.2lfcm\n", height);
	printf("���˸�  : %s\n", crime);
	return 0;
}