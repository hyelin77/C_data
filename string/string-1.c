#include <stdio.h>

int main()
{
	int i; //정수형 변수 선언 
	char str[4]; //문자 배열 4자리
	str[0] = 'a'; //값 하나씩 대입
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0'; //null값 나옴
	//char str[4]="abc";
	//char str[4]={'a', 'b', 'c', '\0'};

	i = 0;
	//while (str[i] != '\0') //반복문(null값이 아닐 때)
	//{					//null 값을 만나면 끝남
	//	printf("%c", str[i]); // 1글자 > %c
	//	i++; //0~2방까지 계속 증가하며 반복
	//}

	/*for (i=0; i < 3; i++)
	{
		printf("%c", str[i]);
	}*/

	i = 0;
	//printf("%c%c%c", str[i], str[i+1], str[i+2]);
	printf("%s\n", str);

	return 0;
}
//for(초기값;조건식;증감식)