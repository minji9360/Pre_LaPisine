#include <stdio.h>

// ����
void p(int num);
void function_without_return();
int function_with_return();

int main_function(void)
{
	// function
	// ����

	//int num = 2;
	////printf("num�� %d �Դϴ�.\n", num); // 2
	//p(num);

	//// 2 + 3��?
	//num = num + 3;
	////printf("num�� %d �Դϴ�.\n", num); // 5
	//p(num);


	//// 5 - 1��?
	//num -= 1; // num = num - 1;
	////printf("num�� %d �Դϴ�.\n", num); // 4
	//p(num);

	//// 4 x 3��?
	//num *= 3;
	////printf("num�� %d �Դϴ�.\n", num); // 12
	//p(num);

	//// 12 / 6��?
	//num /= 6;
	////printf("num�� %d �Դϴ�.\n", num); // 2
	//p(num); // �갡 �� ������ �������ִ� �Լ�.

	// ��ȯ���� ���� �Լ�
	function_without_return();

	// ��ȯ���� �ִ� �Լ� 
	int ret = function_with_return();
	p(ret);

	return 0;
}

// ����
void p(int num)
{
	printf("num�� %d �Դϴ�.\n", num);
}

// ���ް� : 56
// �Լ� : �� + 4
// ��ȯ�� : ?

//��ȯ�� �Լ��̸�(���ް�)
// int �Լ��̸�(num)
//{
//	return num + 4;
//}
// void �Լ��̸�(int num1, int num2, char c, float f)
//{
//}

void function_without_return() 
{
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}