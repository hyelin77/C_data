#define _CRT_SECURE_NO_WARNINGS
#include <string.h> //strcpy, strcat
#include <stdio.h>

int main()
{
	char a[11] = "KOREA"; //���� 6���ڴ� null(\0)�� ä����
	char b[] = "12345"; //6�� ��� ���� �迭(null ����)

	strcat(a, b); //b�� a�� ����, �̶� null���� �����ϰ� ������(����x)

	puts(a); //���ڿ� ���, �ٹٲ� ����
	       //puts()=>���ڿ��� ȭ�鿡 ��� �� Ŀ���� ���� �� ó������ �̵�

	printf("%s", b);
	return 0;
}





//int main(void)
//{
//	char string[80];
//
//	strcpy(string, "Hello world from "); //����(����)
//	strcat(string, "strcpy "); //���� �ٿ�����
//	strcat(string, "and ");
//	strcat(string, "strcat!");
//	printf("string = %s\n", string);
//
//	return 0;
//}