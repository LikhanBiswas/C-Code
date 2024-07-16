#include <stdio.h>
int func(int *x, int *y)
{
    *x = *x + *y;
    *y = *x - *y;
}
int main()
{
    /* code */
    int a;
    int b;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("the value of b is: %d\n", b);
    printf("the value of a is: %d\n", a);
    printf("the value of b is: %d\n", b);
    func(&a, &b);
    printf("the value of a+b is: %d\n", a);
    printf("the value of a-b is: %d\n", b);

    return 0;
}
