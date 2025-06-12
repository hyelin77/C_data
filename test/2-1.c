#include <stdio.h>
int main()
{
	int i;
	int k;
	for (i = 1; i < 10; i++) {
		printf("\n%d´Ü\n", i);
		for (k = 1; k < 10; k++) {
			printf("%d * %d = %d\n", i, k, i * k);
		}
		printf("\n");
	}
	return 0;
}