#include <stdio.h>
void ap1(); //�Լ� ����
void ap2(); //�Լ� ����
int main()
{
	ap1();//�Լ�ȣ��
	ap2();


	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5 }; //������ �� 5��, 4����Ʈ * 5�� = 20����Ʈ //0������ ����
	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i); //������ ��ü�� ���� �ƴ� �ּ� �ǹ�.
	printf("%p\n", &i[0]); //[0]�ּ�
	printf("%p\n", &i); //i�ּ�
	//i == &i == &i[0]

	printf("%p\n\n", &i[1]); //i�� ù��° ���� �ּ�
	printf("%p\n\n", i + 1); 
	printf("%p\n\n", &i[2]); //i�� �ι�° ���� �ּ�
	printf("%p\n\n", i + 2); 
	printf("%p\n\n", &i[3]); //i�� ����° ���� �ּ�
	printf("%p\n\n", i + 3); 

	return;
}

void ap2()
{
	int a[4];
	//a > a�� ù�ּҸ� �ǹ�
	//*a > a�� ����Ű�� ���� �� a[0]�ּҰ� ���� �� ��
	*a = 111; //a[0]=111
	*(a + 1) = 222; //a[1]=222
	*(a + 2) = 333; //a[1]=222
	*(a + 3) = 444; //a[1]=222
	printf("%d\n\n", *a);
	printf("%d\n\n", *(a+1));
	printf("%d\n\n", *(a+2));
	printf("%d\n\n", *(a+3));
}