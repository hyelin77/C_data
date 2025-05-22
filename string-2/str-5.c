#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

int main()
{
	char key[] = "C"; //정답
	char buffer[80] = "";

	do
	{
		printf("임베디드 장치에 가장 많이 사용되는 언어는? ");
		gets(buffer); //엔터키 칠때마다->버퍼 기억
	} while (strcmp(key, buffer) != 0); //비교한다 //같지 않으면 반복
	          //strcmp는 두 문자열을 비교하여 같으면 0 결과로 나옴(아니면 0이 아닌 값)

	//strcpy: 복사(대입)
	//strcat: 연결
	//strcmp: 문자 비교

	printf("맞았습니다!");

	return 0;
}
