#include <stdio.h>

int main(void)
{
	//int i = 10; //정수형 변수 값이 10
	//double f = 12.3; //실수형 변수 값이 12.3
	//int* pi = NULL; //포인터 변수(정수형 변수의 주소 기억할 예정) 선언 //NULL은 주소의 0번지(아무것도 가리키지 않음, 빈 상태)

	//double* pf = NULL; //포인터 변수(실수형 변수의 주소 기억할 예정, 현재는 빈 상태)
	//pi = &i; //i의 주소를 pi에 저장
	//pf = &f; //f의 주소를 pf에 저장

	//printf("%p %p \n", pi, &i); //i의 주소를 출력함
	//printf("%p %p \n", pf, &f); //f의 주소를 출력함

	int k = 300;
	int y = 20;

	printf("%d\n", k);
	printf("%p\n", &k);

	int* po = NULL;
	po = &y;
	printf("%p\n", po);
	printf("%d\n", *po); //20 //포인터 변수에 *을 붙이면 그 기억한 주소에 가서 값을 가져옴(반전)



	return 0;
}