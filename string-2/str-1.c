#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i;
	char str[6]; //���� �迭 ����
	//str = "hello"; //�ʱⰪ(�ȵ�)
	strcpy(str, "hello");
	//strcpy_s(str, 6, "hello");
	/*str[0] = 'K'; //1���ھ� �ʱ�ȭ
	str[1] = 'O';
	str[2] = 'R';
	str[3] = 'E';
	str[4] = 'A';*/

	for (i = 0; i < 5; i++)
	{
		printf("%c", str[i]);
	}

	return 0;
}