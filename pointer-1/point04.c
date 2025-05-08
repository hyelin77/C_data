#include <stdio.h>
int main(void)
{
    int i = 10;  
    int* p; //포인터 변수

    p = &i; //p는 i의 주소 기억, p가 기억하는 주소 = i의 주소
    printf("i = %d\n", i); //값 출력(i는 일반 변수)
   
    *p = 20; //p는 포인터 변수인데 *가 붙음 > 기억하고 있는 주소에 가서 그 값을 가져오라는 것, 그 값에 20 대입
    printf("i = %d\n\n", i); //20출력     

    //---------------------------

    int a = 10;

    int* po; //po가 가르키는 곳이 int
    po = &a; //a의 주소=po 가르키는 곳이 주소와 같다
    //sizeof() : () 안에 크기

    printf("%d\n", sizeof(a)); //4바이트(정수형)
    printf("%d\n", sizeof(po)); //포인트 변수는 무조건 8바이트
    printf("%d\n", sizeof(&a)); //주소 담음 > 8바이트
    printf("%d\n", sizeof(*po)); //포인트 변수에 * 그 주소에 가서 값을 가져옴, 정수형은 4바이트
    return 0;
}