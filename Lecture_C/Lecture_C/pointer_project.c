#include <stdio.h>
#include <time.h>

// 물고기가 6마리가 있다.
// 이들은 어항에 사는데, 사막이다.
// 사막이 너무 더워서, 혹은 너무 건조해서 물이 아주 빨리 증발한다.
// 물이 다 증발하기 전에 부지런히 어항에 물을 줘서 물고기를 살려주자.
// 물고기는 시간이 지날수록 점점 커져서, 나중에는.... 냠냠..

int level;
int arrayFish[6];
int * cursor;

void initData();
void printFishes();
void decreaseWater(long elapsedTime);
int checkFishAlive();

main(void)
{
	long startTime = 0; // 게임 시작 시간
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지. 사용자 입력
	initData();

	cursor = arrayFish; // cursor[0] .. cursor[1] ..

	startTime = clock(); // 현재 시간을 millisecond (1000분의 1초) 단위로 반환
	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf_s("%d", &num);

		// 입력값 체크
		if (num < 1 || num > 6)
		{
			printf("\n입력값이 잘못되었습니다.\n");
			continue; // 다시 29번 줄로 가서 어항 상태 보여주고 진행 할 것
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC; 
		// 총 경과시간 = 현재 시간 - 시작시간 / 밀리세컨드를 초 단위로 바꿔주는 역할;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간 (마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld 초\n", prevElapsedTime);

		// 어항의 물을 감소 (증발)
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물을 준다.
		// 1. 어항의 물이 0이면? 물을 주지 않는다. 이미 고기가..ㅠㅠ
		if (cursor[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
		}
		// 2. 어항의 물이 0이 아닌 경우? 물을 준다 ! 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			// 물을 준다
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1; // cursor[num-1] = cursor[num - 1] + 1
		}

		// 레벨업을 할 건지 확인 (레벨업은 20초마다 한 번씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			// 레벨업
			level++; // level : 1 -> level : 2 -> level : 3 ..
			printf(" *** 축 레벨업 ! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);
		
			// 최종 레벨 : 5
			if (level == 5)
			{
				printf("\n\n축하합니다. 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 물고기 모두 ㅠㅠ
			printf("모든 물고기가..ㅠㅠ 흑흑..\n");
		}
		else
		{
			// 최소 한 마리 물고기 이상은 살아있음
			printf("물고기가 아직 살아 있어요!\n");
		}
		prevElapsedTime = totalElapsedTime;
		// 10 초 -> 15초 (5초 : prevElapsedTime) -> 25초 (10초..?)
		// 25초에서 기존 15초를 빼야 10초라는 결과가 나오는데, 그 15초를 저장할 공간이 없음
		// 현재는 prevElapsedTime에 5초가 들어있으니까.
		// 근데 쟤는 다시 처음으로 돌아가면 5초는 이미 사용한 후니까 다시 prevElapsedTime에 15초를 저장하면 됨
	}
	return 0;
}

void initData()
{
	level = 1; // 게임 레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항의 물 높이 (0 ~ 100)
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]); // %3d : (숫자 할당받는) 3칸, 번 : 2자, 스페이스 : 1칸
									   // > 총 6칸 : 가운데 네 칸 공간 마련하고, 양 옆으로 한 칸씩
									   // 크기 맞추려고 앞 뒤로 스페이스 넣어준 것
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3 : 난이도 조절을 위한 값
		//           -= 이만큼의 물
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1; // 참 True
	}
	return 0;
}