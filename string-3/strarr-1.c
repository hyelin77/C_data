#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i;
	char ex[4][5] = {   //4��(����) 5��(����)
		"abc", //0��
		"xyz", //1��
		"kkkk", //2��
		"love" //3��
	};

	printf("%c\n", ex[1][0]);
	printf("%c\n", ex[3][3]);
	printf("%s\n", ex[1]);
	scanf("%c", &ex[0][3]); //0�� 3�� ��� �Է� �� &����
	printf("%c\n", ex[0][3]); //�� ��� ��� %c
	printf("%s\n", ex[0]); //�� �� ��� %s
	
	scanf("%s", &ex[2]);
	printf("%s\n", ex[2]); 

	return 0;
}