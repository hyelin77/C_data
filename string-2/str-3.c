//#include <stdio.h>
//
//int main()
//{
//
//	int ch;
//	ch = getchar();
//	putchar(ch);
//
//	return 0;
//}


#include <stdio.h>

int main()
{

	char name[100];
	char address[100];

	printf("�̸��� �Է��Ͻÿ�: ");
	gets_s(name, sizeof(name)); //gets(name);

	printf("���� �����ϴ� �ּҸ� �Է��Ͻÿ�: ");
	gets_s(address, sizeof(address)); //gets(address);

	puts(name);
	puts(address);

	return 0;
}