//switch��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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

	switch (op)
	{
	case '+': //�����ݷ��� �ƴ� �ݷ�
			r1 = a + b;
			printf("%d %c %d = %d", a, op, b, r1); //���: a + b = r1
			break;
	case '-':
			r1 = a - b;
			printf("%d %c %d = %d", a, op, b, r1);
			break;
	case '*':
			r1 = a * b;
			printf("%d %c %d = %d", a, op, b, r1);
			break;
	case '/':
			r2 = (double)a / b; //�Է¹޴� ���ڰ� �� �� �������� �� ������ ������ �� ���, ����� ���������� ������ ������ �� �� �ϳ��� �Ǽ������� �ٲ��־�� ��.
			printf("%d %c %d = %.2f", a, op, b, r2); //�Ҽ��� n�ڸ����� ǥ���� ���� %�� f ���̿� .n �ֱ�
			break;

	default:
		printf("�����ڸ� �߸� �Է��ϼ̽��ϴ�.");
		break;
	}


	return 0;
}