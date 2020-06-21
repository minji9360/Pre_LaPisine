#include <stdio.h>

int main_loop(void)
{
	/*for (int i = 0; i < 10; i++) {
		printf("Hello World\n");
	};*/

	// ++ 쁠쁠
	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;*/

	/* 
	int b = 20;
	// b++ == (b = b + 1);
	 
	// 문장에서 ++ 동작을 먼저 수행하고, 문장을 끝낸다
	printf("b는 %d\n", ++b);

	// 문장을 모두 수행한 후, 다음 문장으로 넘어갈 때 b에 1 더함
	printf("b는 %d\n", b++); 
	printf("b는 %d\n", b);

	int i = 1;
	printf("Hello World %d\n", i++); // 1
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++); // 10 
	*/

	// for (선언; 조건; 증감) { }
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World %d\n", i);
	}*/

	/*
	// while (조건) { }
	int i = 1;
	while (i <= 10) {
		printf("Hello World %d\n", i++);
		//i++;
	}
	*/

	/*
	// do { } while (조건);
	int i = 1;
	do {
		printf("Hello World %d\n", i++);
	} while (i <= 10);
	*/

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++) {
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) {
			printf("   두 번째 반복문 : %d\n", j);
		};
	}*/

	// 구구단
	// 2 x 1 = 2
	// 2 x 2 = 4
	// 2 x 3 = 6
	// 2 x 4 = 8
	// ...
	// 9 x 9 = 81
	/*for (int i = 2; i < 10; i++) {
		printf("%d 단 계산\n", i);
		for (int j = 1; j < 10; j++) {
			printf("%d x %d = %d\n", i, j, i * j);
		}
	}*/

	/*
	*
	**
	***
	****
	*****
	*/
	/*
	for (int i = 0; i < 5; i++) // 큰 틀(전체 줄 수)
	{
		for (int j = 0; j <= i; j++) { // 한 줄에 찍히는 별 수
			printf("*");
		}
		printf("\n");
	}
	*/

	/*
	SSSS*
	SSS**
	SS***
	S****
	*****
	*/

	/*for (int i = 0; i < 5; i++) {
		for (int j = i; j < 5 - 1; j++) {
			printf("S");
		}
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}*/

	// 피라미드를 쌓아라 프로젝트
/*
SSSS*
SSS***
SS*****
S*******
*********
*/
	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) {
		for (int j = i; j < floor - 1; j++) {
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) { // +1은 가운데 하나 무조건 들어가는 것, 양 옆으로 별쌓기
			printf("*");
		}
		printf("\n");
	}
	return 0;
}