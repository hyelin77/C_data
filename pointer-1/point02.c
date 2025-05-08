#include <stdio.h>

int main() //return에 반환되는 값이 정수형
//return이 없거나 return;인 경우 > void 함수명()
{
	int i = 3000; 
	int* p = NULL; //*는 일반 변수가 아닌 포인터 변수임을 선언

	p = &i; //p는 i 주소 가리킴

	printf("p = %p\n", p); //p가 포인터변수이므로 주소 출력
	printf("&i = %p\n\n", &i); //i는 일반변수, &는 주소출력(%p)
	printf("i = %d\n", i);
	printf("*p = %d\n", *p); //간접 참조 연산자 * : 포인터 변수가 가리키는 주소에 가서 그 값을 꺼내옴
	return 0;
}