#include <stdio.h>

int fun1();
int fun2();

int main(void)
{
	printf("메인 시작\n");
	fun1();
	printf("메인 끝\n");
	return 0;
}
int fun1()
{
	printf("fun1 함수 시작\n");
	fun2();
	printf("fun1 함수 끝\n");
	return 0;
}
int fun2()
{
	printf("fun2 함수 시작\n");
	printf("fun2 함수 끝\n");
	return 0;
}