//����Լ�: �Լ� ���ο��� �ڱ� �ڽ��� �ٽ� ȣ��(ȣ�� �ߴ� ������ ����� ��ɹ� �ʼ� ����)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int func(int n);
int main()
{
	int n, res;
	printf("���� �Է�: ");
	scanf("%d", &n);
	printf("�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
	res = func(n);
	printf("���: %d\n", res);


	return 0;
}

int func(int n)
{
	if (n == 1) {
		return 1;
	}

	else {
		return n * func(n - 1);
	}
}