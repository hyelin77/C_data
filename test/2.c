#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 15; i = i + 3) {
		printf("%d��\t        %d��\t        %d��\n", i, i + 1, i + 2);
		for (j = 1; j <= 9; j++) {
			printf("%d * %d %2d\t", i, j, i * j); //%d�� ������
			printf("%d * %d %2d\t", (i+1), j, (i+1)*j);
			printf("%d * %d %2d\n", (i+2), j, (i+2)*j);
		}
		printf("\n\n");
	}
	return 0;
}