#include <stdio.h>

//���� ���� ȣ��
//void swap(int x, int y); //�Լ� ����
//
//int main()
//{
//	int a = 100, b = 200;
//	printf("a = %d, b = %d\n", a, b);
//
//	swap(a, b); //�Լ� ȣ�� (a,b ������)
//	//�Լ� �����ϰ� ���ƿ�, ��ȯ ������� ����
//	
//	printf("a = %d, b = %d\n", a, b);
//	return 0;
//}
//
//void swap(int x, int y) //a > x(100), b > y(200)
//{
//	int tmp;
//	printf("x = %d, y = %d\n", x, y); //100, 200
//
//	tmp = x; //tmp�� 100
//	x = y; //y���� x�� �̵�, x�� 200
//	y = tmp; //tmp 100�� y�� �̵�
//
//	printf("x = %d, y = %d\n", x, y); //200, 100
//	return; //����
//}

//������ ���� ȣ��
void swap(int* px, int* py);
int main()
{
	int a = 100, b = 200;
	printf("a = %d, b = %d\n", a, b); //100, 200

	swap(&a, &b); //�Լ� ȣ��(���� �ƴ� �ּ� ����)
	//�Լ� ȣ�� �� ���ƿ�
	printf("a = %d, b = %d\n", a, b); //200, 100
	return 0;
}

void swap(int* px, int* py) //a �ּ� > px, b �ּ� > py
{
	int tmp;
	tmp = *px; //px�� a�� �ּҸ� ����Ű�� �ִµ� �� ��(100)
	*px = *py; //py�� b�� �ּҸ� ����Ű�� �ִµ� �� ��(200)
	          //px�� �ּ��� a�� ����
	*py = tmp; //py�� �ּ��� b�� ����
}��