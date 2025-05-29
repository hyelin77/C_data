#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	char ex[4][5] = {   //4행(세로) 5열(가로)
		"abc", //0행
		"xyz", //1행
		"kkkk", //2행
		"love" //3행
	};

	printf("%c\n", ex[1][0]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);
	scanf("%c", &ex[0][3]); //0행 3열 요소 입력 시 &붙임
	printf("%c\n", ex[0][3]); //한 요소 출력 %c
	printf("%s\n", ex[0]); //한 행 출력 %s
	
	scanf("%s", &ex[2]);
	printf("%s\n", ex[2]); 

	return 0;
}