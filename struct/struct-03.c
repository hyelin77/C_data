#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point { //point ����ü ����
	int x; //������ 
	int y; //������
};

struct rect { //rect ����ü ����
	struct point p1; //����ü �ȿ� ����ü ����
	struct point p2; //
};

int main()
{
	struct rect r; //r ����ü ���� ����
	int w, h, area, peri;

	printf("���� ����� ��ǥ�� �Է��Ͻÿ�: "); //��)10 10 
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("������ ����� ��ǥ�� �Է��Ͻÿ�: "); //��)10 10 
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.x - r.p1.x;

	area = w * h;
	peri = 2 * w + 2 * h;
	printf("������ %d�̰� �ѷ��� %d�Դϴ�.\n", area, peri);

	return 0;
}