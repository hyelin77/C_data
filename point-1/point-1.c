#include <stdio.h>
int main()
{
	int i = 10; //������ ������ �� 10 ����
	char c = 69; //�ƽ�Ű�ڵ� 69=E ����
	float f = 12.3; //�Ǽ��� ������ 12.3 ����
	printf("i�� ��: %d\n", i); //���� i�� �ּ� ���
	printf("c�� ��: %c\n", c); //���� c�� �ּ� ���
	printf("f�� ��: %f\n", f); //���� f�� �ּ� ���

	//%p�� point�� ����, �ּҸ� �ǹ���(�ּ� ������)
	printf("i�� �ּ�: %p\n", &i);
	printf("c�� �ּ�: %p\n", &c);
	printf("f�� �ּ�: %p\n", &f);
	return 0;
}