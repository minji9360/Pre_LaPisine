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
		printf("점수 입력이 잘못되었습니다. 확인해주세요.");
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
			printf("점수가 잘못되었습니다. 확인해주세요.");
			exit();
		}
	}

	printf("%d", tot / 5);
	return 0;
}

// 처음에는 변수 이름 다 한 명씩 줘서 하려고 했는데, 굳이 그럴 필요가 없었다.
// java로 할 때는 하나하나 다 줬던 것 같은데..ㅋㅋ..
// 어쨌든 점수를 잘못 입력해서 else로 넘어가도 break 걸어두면 tot / 5 값을 출력해버려서
// exit() 함수를 썼는데 백준에서는 오류나서 그냥 break로 바꿨다.
// 인자 값이 적어서 난 오류라는데.. 아예 예외처리 하지 말아버릴까 하다가 그냥 뒀다.
// 수정하려면 할 수 있겠지만,, 아직은 잘 모르겠다.