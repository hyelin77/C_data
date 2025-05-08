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