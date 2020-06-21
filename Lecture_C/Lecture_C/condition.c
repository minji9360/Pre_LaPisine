#include <stdio.h>
#include <time.h>

int main_condition(void) 
{
	// 버스를 탄다고 가정. 학생/일반인으로 구분 (일반인 : 20세)
	/*int age = 15;
	if (age >= 20)
		printf("일반인입니다.\n");
	else
		printf("학생입니다.\n");
	return 0;*/
	
	// 초등학생 (8~13) / 중학생(14~16) / 고등학생(17~19)으로 나누면?
	// 1. if / else if / else
	/*int age = 48;
	if (age >= 8 && age <= 13)
	{
		printf("초등학생입니다.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("중학생입니다.\n");
	}
	else if (age >= 17 && age <= 19) 
	{
		printf("고등학생입니다.\n");
	}
	else 
	{
		printf("학생이 아닌가봐요.\n");
	}*/
	
	// 2. break / continue
	// 1) 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
	/*for (int i = 1; i <= 30; i++) 
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요.\n", i);
			break;
		}
		printf("%d 번 학생은 조별 발표를 준비하세요.\n", i);
	};*/

	// 2) 1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//    7번 제외하고 6번부터 10번까지 조별 발표를 하세요.
	/*for (int i = 1; i <= 30; i++) 
	{
		if (i == 7) 
		{
			printf("7번은 병결입니다.\n");
		}
		else if (i >= 6 && i <= 10) 
		{
			printf("%d 번은 조별 발표를 하세요.\n", i);
		}
		else
		{
			printf("나머지 학생은 집에 가세요.\n");
		}
	}*/
	// 강의에서 나온 답?
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if(i == 7) 
	//		{
	//			printf("%d 번 학생은 결석입니다.\n", i);
	//			continue; // 여기서 멈추고 다음 문장은 실행하지 않는다. 다음으로 넘어감
	//		}
	//	}
	//	printf("%d 번 학생은 조별 발표 준비를 하세요.\n", i);
	//}
	// 다른 점 : 난 하나의 if문으로 해결했는데, 여기서는 중첩 if문으로 더 보기 좋게 해결한 느낌
	//			 6~10 중에서 7만 예외니까 예외처리 한 느낌으로? 더 좋아보임. continue도 활요하고

	// 3. &&, ||
	/*int a = 11;
	int b = 11;
	int c = 12;
	int d = 13;
	if (a == b || c == d) {
		printf("a와 b, 또는 c와 d의 값이 같습니다.\n");
	}
	else
	{
		printf("값이 서로 다르네요\n");
	}*/

	// 4. Switch case
	// 1) 가위바위보 - if
	/*srand(time(NULL));
	int i = rand() % 3; // 0~2 반환
	if (i == 0)
	{
		printf("가위\n");
	}
	else if (i == 1)
	{
		printf("바위\n");
	}
	else if (i == 2)
	{
		printf("보\n");
	}
	else
	{
		printf("몰라요\n");
	}*/

	// 2) 가위바위보 - switch
	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i) 
	{
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n");
	case 2:printf("보\n");
	default:printf("몰라요\n");
	}*/
	// switch 케이스에서는 각 경우마다 break 넣어줘야 함
	// 만약 i가 0이면 case 0을 출력하고 그 아래로는 조건 확인하지 않고 무조건 출력함
	// break문은 해당 경우에 따른 switch 구문을 출력한 후 탈출하도록 함

	//int age = 15;
	//switch (age)
	//{
	//case 8:
	//case 9:
	//case 10:
	//case 11:
	//case 12:
	//case 13: printf("초등학생입니다.\n"); break; // break를 없애면 break 있는 곳까지 모두 출력하니까
	//case 14:
	//case 15:
	//case 16: printf("중학생입니다.\n"); break;
	//case 17:
	//case 18:
	//case 19: printf("고등학생입니다.\n"); break;
	//default: printf("학생이 아닌가봐요.\n"); break;
	//}

	// 4. 프로젝트 Up and Down
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; // 정답
	int chance = 5; // 기회
	while (chance > 0)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
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
			printf("정답입니다!\n\n");
			break;
		}
		else {
			printf("알 수 없는 오류가 발생하였습니다.\n\n");
		}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다.\n\n");
			break;
		}
	}
	return 0;
}