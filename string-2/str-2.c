#include <stdio.h>

int main()
{

	char str[30] = "C language";
	int i = 0;

	while (str[i] != '\0')//������ �� �ݺ�
		i++;

	printf("���ڿ�\"%s\"�� ���̴� %d�Դϴ�.\n", str, i);
	return 0;
}