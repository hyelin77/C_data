#include <stdio.h>

int main()
{
	int x = 500;
	double y = 20.34;
	int* p1 = NULL;
	double* p2 = NULL;

	p1 = &x; //p1�� x�� �ּҸ� ����Ŵ
	p2 = &y;

	printf("%p %p \n", p2, &y);

	//printf("%p %p \n", p2, p1); //p1�ּҸ� p2�� �����Ͽ� ���� ���� ����Ŵ
	
	return 0;
}