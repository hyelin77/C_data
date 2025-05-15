#include <stdio.h>
void ap1(); //함수 선언
void ap2(); //함수 원형
int main()
{
	ap1();//함수호출
	ap2();


	return 0;
}

void ap1()
{
	int i[5] = { 1,2,3,4,5 }; //정수형 방 5개, 4바이트 * 5개 = 20바이트 //0번부터 시작
	printf("%d\n", i[0]);
	printf("%d\n", i[1]);
	printf("%d\n", i[2]);
	printf("%p\n", i); //베열명 자체는 값이 아닌 주소 의미.
	printf("%p\n", &i[0]); //[0]주소
	printf("%p\n", &i); //i주소
	//i == &i == &i[0]

	printf("%p\n\n", &i[1]); //i의 첫번째 방의 주소
	printf("%p\n\n", i + 1); 
	printf("%p\n\n", &i[2]); //i의 두번째 방의 주소
	printf("%p\n\n", i + 2); 
	printf("%p\n\n", &i[3]); //i의 세번째 방의 주소
	printf("%p\n\n", i + 3); 

	return;
}

void ap2()
{
	int a[4];
	//a > a의 첫주소를 의미
	//*a > a가 가르키는 곳의 값 a[0]주소가 가서 그 값
	*a = 111; //a[0]=111
	*(a + 1) = 222; //a[1]=222
	*(a + 2) = 333; //a[1]=222
	*(a + 3) = 444; //a[1]=222
	printf("%d\n\n", *a);
	printf("%d\n\n", *(a+1));
	printf("%d\n\n", *(a+2));
	printf("%d\n\n", *(a+3));
}