#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	char fruits[3][20]; //0~2행 0~19열, 3개 행 20개 열
	for (i = 0; i < 3; i++) { //0~2행 반복
		printf("과일 이름을 입력하시오: ");
		scanf("%s", &fruits[i]); //행단위 입력(1줄씩 입력)
	}
	for (i = 0; i < 3; i++) //0~2행 3번 반복 
		printf("%d번째 과일: %s\n", i, fruits[i]); //1행(줄)씩 출력

	return 0;
}