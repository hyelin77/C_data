#include <stdio.h>

int main()
{
	int i = 10;
	int* pi = &i;

	printf("i = %d, pi = %p\n", i, pi); //얘가 원본

	(*pi)++; //주소는 그대로, 값 증가
	//pi 값을 가져오고 다음 문장으로 갈때 값+1 
	printf("i = %d, pi = %p\n", i, pi);

	*pi++; //주소와 값 모두 증가
	//pi 값을 가져오고 pi 주소 증가
	printf("i = %d, pi = %p\n", i, pi);
	
	return 0;
}

//000000B1590FF744

//v = *p++ > 주소 증가 
//v = (*p)++ > 값을 증가 
//v = *++p > ++p를 먼저 계산. 주소 먼저 증가 후 값을 대입 
//v = ++*p > *p 먼저 계산. 값을 증가