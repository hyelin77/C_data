#include <stdio.h>

int fun1(); //함수 원형 (함수 선언)
//함수가 main 아래 위치, 해당 함수가 존재하는 것을 미리 선언함(끝에 ; 붙임)
int fun2();

int main(void) //void는 정수형, 실수형 같은 형이 없음(타입이 없음, 생략 가능=괄호만 넣어도 됨)
{
	printf("메인 시작\n"); //1번
	fun1(); //2번 //fun1 함수를 호출함, 인수를 보내지 않음
	printf("메인 끝\n"); //10번 
	return 0; //11번 //오류없이 완전히 종료
}
int fun1() //매개변수도 없음, return으로 반환할 값의 형을 기입한다(return 0 > 정수형 > int)
{
	printf("fun1 함수 시작\n"); //3번
	fun2(); //4번 //두 번째 함수 호출
	printf("fun1 함수 끝\n"); //8번
	return 0; //9번 //fun1()를 호출한 다음 수행 줄로 이동함
}
int fun2()
{
	printf("fun2 함수 시작\n"); //5번 
	printf("fun2 함수 끝\n"); //6번
	return 0; //7번 //fun2()를 호출한 다음 수행 줄로 이동함
}