#include <stdio.h>

int function(int *adress)
{
    *adress = 3454;
}
int main()
{
    /* code */
    int a = 74;
    int b = 89;
    printf("the value of a is: %d\n", a);
    function(&a);
    printf("the value of a is: %d", a);

    return 0;
}
