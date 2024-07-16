#include<stdio.h>
int main()
{
    int a;
    int b;
    a=2;
    b=3;
    printf(" a + b = %f\n", a+b);
    printf(" a - b = %f\n", a-b);
    printf(" a * b = %f\n", a*b);
    printf(" a / b = %f\n", a/b);
    printf(" a & b = %d\n", a&&b);
    printf(" a || b = %d\n", a||b);
    printf(" !a = %d\n", !a);
    printf(" !b = %d\n", !b);
    printf("a & b = %d\n", a&b);
    printf("a | b = %d\n", a|b);
    printf("a ^ b = %d\n", a^b);
    printf(" ~a = %d\n", ~a);
    printf("size of a =%d\n", sizeof(a));//size of variables
    printf("address of operator a = %d\n", &a);//addess of variables
    printf("address of operator b = %d\n", &b);
    //[printf("pointer of a a = %d\n", *a); //operatorsCheck.c: In function 'main':
//operatorsCheck.c:23:37: error: invalid type argument of unary '*' (have 'int')
    // printf("pointer of a a = %d\n", *a);][error show kore pointer e ]
}