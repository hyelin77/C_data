#include <stdio.h>

int main()
{
	char str1[6] = "Seoul";
	char str2[3] = { 'i','s','\0' };
	char str3[] = "the capital city of Korea.";
	printf("%s %s %s\n", str1, str2, str3);

	//���� �迭�� ����� �ʱ�ȭ
	char a[3] = { 'h','i' }; //�ڵ����� \0�Է�
	char b[10] = { "hello" }; //�ڵ����� \0�Է�
	char c[10] = "what's up"; //�ڵ����� \0�Է�
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);

	//���Ṯ�� �� �ڸ��� ���� ���
	char i[2]= { 'h','i' };
	char k[9] = "what's up";
	printf("%s\n", i);
	printf("%s\n", k);

	return 0;
}