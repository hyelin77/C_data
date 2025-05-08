#include <stdio.h>

int main()
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	double* p2 = NULL;

	p1 = &x; //p1이 x의 주소를 가리킴
	p2 = &y;

	printf("%p %p \n", p2, &y);

	//printf("%p %p \n", p2, p1); //p1주소를 p2에 대입하여 같은 값을 가리킴
	
	return 0;
} 
//v = *p++ > 주소 증가 100 34.
//v = (*p)++ > 값을 증가 100 101
//v = *++p > ++p를 먼저 계산. 주소 먼저 증가 후 값을 대입 500 34
//v = ++*p > *p 먼저 계산. 값을 증가 101 