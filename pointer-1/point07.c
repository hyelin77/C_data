#include <stdio.h>

int main()
{
    int *pnum, num1 = 200;
    int num2 = 300;

    pnum = &num1;
    (*pnum) += 40;

    pnum = &num2;
    (*pnum) += 50;

    printf("num1=%d num2=%d\n", num1, num2);
    return 0;
}
//240, 350