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
			printf("가격 범위는 100원 이상 2000원 이하입니다.");
		}
	}
	price = burger + drink - 50;
	printf("%d", price);

	return 0;
}
// 이전에는 상근,중근,하근 버거, 콜라, 사이다 다 받아서 비교했는데
// 이번엔 가격을 받으면서 바로 비교하고, 최저가만 살려서 계산 후 출력했다.
// 어떤 버거와 음료를 세트로 해서 최저가가 나오는지 알아야 한다면 다 변수로 받아야겠지만
// 지금은 세트의 최저가를 알고 싶다고 했으므로 이런 알고리즘도 괜찮다고 생각한다.