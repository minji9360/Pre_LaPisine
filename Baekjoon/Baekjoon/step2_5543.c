#include <stdio.h>

int main_5543(void)
{
	int price;
	int burger = 2000;
	int drink = 2000;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &price);

		if (price >= 100 && price <= 2000)
		{
			if (i < 3 && price <= burger) 
			{
				burger = price;
			}
			else if (i < 5 && price <= drink)
			{
				drink = price;
			}
		}
		else
		{
			printf("���� ������ 100�� �̻� 2000�� �����Դϴ�.");
		}
	}
	price = burger + drink - 50;
	printf("%d", price);

	return 0;
}
// �������� ���,�߱�,�ϱ� ����, �ݶ�, ���̴� �� �޾Ƽ� ���ߴµ�
// �̹��� ������ �����鼭 �ٷ� ���ϰ�, �������� ����� ��� �� ����ߴ�.
// � ���ſ� ���Ḧ ��Ʈ�� �ؼ� �������� �������� �˾ƾ� �Ѵٸ� �� ������ �޾ƾ߰�����
// ������ ��Ʈ�� �������� �˰� �ʹٰ� �����Ƿ� �̷� �˰��� �����ٰ� �����Ѵ�.