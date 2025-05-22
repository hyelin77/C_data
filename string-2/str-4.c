#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //strcpy, strcat
#include <stdio.h>

int main()
{
	char a[11] = "KOREA"; //남은 6글자는 null(\0)로 채워짐
	char b[] = "12345"; //6개 요소 갖는 배열(null 포함)

	strcat(a, b); //b를 a에 연결, 이때 null값을 제거하고 연결함(공백x)

	puts(a); //문자열 출력, 줄바꿈 포함
	       //puts()=>문자열을 화면에 출력 후 커서를 다음 줄 처음으로 이동

	printf("%s", b);
	return 0;
}





//int main(void)
//{
//	char string[80];
//
//	strcpy(string, "Hello world from "); //복사(대입)
//	strcat(string, "strcpy "); //끝에 붙여넣음
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("string = %s\n", string);
//
//	return 0;
//}