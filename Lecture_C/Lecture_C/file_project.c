#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��й�ȣ�� �Է� �޾Ƽ�
// �´� ���? ��� �ϱ⸦ �о�ͼ� �����ְ�, ��� �ۼ��ϵ���
// Ʋ�� ���? ��� �޽����� ǥ���ϰ� ����

#define MAX 10000

int main(void)
{
	// fgets, fputs Ȱ��
	char line[MAX]; // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; // �ϱ��忡 �Է��� ����
	char password[20]; // ��й�ȣ �Է�
	char c; // ��й�ȣ �Է��� �� Ű�� Ȯ�ο� (����ŷ)

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	// getchar() / getch() �� ����?
	// getchar() : ���͸� �Է¹޾ƾ� ������ �Ѵ�
	// getch() : Ű �Է� �� �ٷιٷ� ������ �Ѵ�

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13) // Enter -> ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	printf("\n\n === ��й�ȣ Ȯ�� ��... ===\n\n");
	if (strcmp(password, "skehzheld") == 0) // ��й�ȣ ��ġ (����ġ �� 1�̳� -1)
	{
		printf(" === ��й�ȣ Ȯ�� �Ϸ� === \n\n");
		char* fileName = "c:\\upload\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b");
		// ������ ������ ����, ������ append�Ѵ� (�ڿ������� ������ �߰�)
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ϸ��� EXIT�� �Է��ϼ���\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // �� ��(\n)�� ������ ������ �о���� (�� ���徿 �����ϰڴ�..�� ��)
			getchar(); // Enter �Է� (\n) Flush ó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // Enter�� ������ ���� ó�� �Ͽ����Ƿ� ���Ƿ� �߰�
		}
		fclose(file);
	}
	else // ��й�ȣ Ʋ�� ���
	{
		printf(" === ��й�ȣ�� Ʋ�Ⱦ�� ===\n\n");
		printf(" ��!! ��� ������!! ���� �� �ϱ����� ! \n\n");
	}
	return 0;
}