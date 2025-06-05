#include <stdio.h>

union example { //union: 공용체(메모리 공간 공유)
	int i; //정수형 4바이트
	char c; //문자 1자, 1바이트
};

int main()
{
	union example v; //공용체 변수 v 선언

	v.c = 'A';
	printf("v.c: %c  v.i: %i\n", v.c, v.i);

	v.i = 10000;
	printf("v.c: %c  v.i: %i\n", v.c, v.i);
}