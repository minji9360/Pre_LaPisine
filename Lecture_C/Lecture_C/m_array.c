#include <stdio.h>

int main(void)
{
	// 陥託据 壕伸 Multidimensional Array
	/*
	int i; // け

	int arr[5]; 
	// けけけけけ
	// 羨悦狛 (arr澗 持繰)
	// [0] [1] [2] [3] [4]

	int arr2[2][5];
	// けけけけけ
	// けけけけけ

	// [0,0] [0,1] [0,2] [0,3] [0,4] -> ex) arr2[0][1]
	// [1,0] [1,1] [1,2] [1,3] [1,4] -> ex) arr2[1][4]

	int arr3[4][2];
	// けけ
	// けけ
	// けけ
	// けけ

	// [0,0] [0,1]    -> ex) arr3[0][1]
	// [1,0] [1,1]
	// [2,0] [2,1]
	// [3,0] [3,1]    -> ex) arr3[3][0]

	int arr4[3][3][3];
	// けけけ
	// けけけ
	// けけけ

	// けけけ
	// けけけ
	// けけけ

	// けけけ
	// けけけ
	// けけけ

	// [0,0,0] [0,0,1] [0,0,2] 
	// [0,1,0] [0,1,1] [0,1,2]
	// [0,2,0] [0,2,1] [0,2,2]

	// [1,0,0] [1,0,1] [1,0,2]  
	// [1,1,0] [1,1,1] [1,1,2]
	// [1,2,0] [1,2,1] [1,2,2]

	// [2,0,0] [2,0,1] [2,0,2] 
	// [2,1,0] [2,1,1] [2,1,2]
	// [2,2,0] [2,2,1] [2,2,2]

	int arr[5] = { 1,2,3,4,5 };
	int arr2[2][5] = { 
		{1,2,3,4,5}, 
		{1,2,3,4,5} 
	};
	int arr3[4][2] = { 
		{1,2},
		{1,2},
		{1,2},
		{1,2} 
	};
	int arr4[3][3][3] = {
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		},
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		},
		{
			{1,2,3},
			{1,2,3},
			{1,2,3}
		}
	};
	*/

	int arr3[4][2] = {
		{1,2},
		{3,4},
		{5,6},
		{7,8}
	};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("2託据 壕伸 (%d, %d)税 葵 : %d\n", i, j, arr3[i][j]);
		}
		printf("\n");
	}

	int arr4[3][3][3] = {
		{
			{1,2,3},
			{4,5,6},
			{7,8,9}
		},
		{
			{11,12,13},
			{14,15,16},
			{17,18,19}
		},
		{
			{21,22,23},
			{24,25,26},
			{27,28,29}
		}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++) {
				printf("3託据 壕伸 (%d, %d, %d)税 葵 : %d\n", i, j, k, arr4[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}