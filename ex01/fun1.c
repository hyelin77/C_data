#include <stdio.h>

int fun1();
int fun2();

int main(void)
{
	printf("���� ����\n");
	fun1();
	printf("���� ��\n");
	return 0;
}
int fun1()
{
	printf("fun1 �Լ� ����\n");
	fun2();
	printf("fun1 �Լ� ��\n");
	return 0;
}
int fun2()
{
	printf("fun2 �Լ� ����\n");
	printf("fun2 �Լ� ��\n");
	return 0;
}