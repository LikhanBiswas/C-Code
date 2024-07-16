#include <stdio.h>

int printSum()
{
    int n;
    printf("enter a number:", n);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("%c    ", '*');
    }
}
int main()
{
    /* code */

    int c;

    c = printSum();

    return 0;
}
