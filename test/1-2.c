//if��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int add(int x, int y); //main ���� �Լ� ����. �����ݷ� ���
int sub(int x, int y);
int mul(int x, int y);
double div(int x, int y);
int main()
{
	int a, b; //���� 2�� �Է� ���� ����
	int r1 = 0; //+ - * ���
	double r2 = 0; // / ���
	//scanf: float=%f, double=%lf, printf: float=%f, double=%f(printf �ÿ��� c���� �Ǽ��� �⺻���� double)
	char op; //������ ���� ��

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &a); //scanf �� ���� &�ֱ�

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf("%d", &b);

	printf("������ ��ȣ�� �Է��Ͻÿ�(+, -, *, /): ");
	scanf(" %c", &op); //����

	if (op == '+') {
		r1 = add(a, b);
	}

	else if (op == '-') {
		r1 = sub(a, b);
	}
	

	else if (op == '*') {
		r1 = mul(a, b);
	}
	

	else if (op == '/') {
		r2 = div(a, b);
	}
	
	else {
		printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.\n");
	}

	if (op == '+' || op == '-' || op == '*') {
		printf("%d %c %d = %d\n", a, op, b, r1);
	}

	else if (op == '/') {
		printf("%d %c %d = %.2f\n", a, op, b, r2);
	}

	return 0;
}

int add(int x, int y) //���� ���Ƶ� �̸��� ���� �ʾƵ� ��
{
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mul(int x, int y) 
{
	return x * y;
}

double div(int x, int y)
{
	return (double)x / y;
}