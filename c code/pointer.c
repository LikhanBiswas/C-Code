#include <stdio.h>
int main()
{
    /* code */
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    int *pointar = &a;
    printf("The value you have given is %d\n", *pointar); // samne star dite hobe.
    printf("The address of the value you have given is %p\n", &pointar);
    printf("%d\n", pointar);
    printf("%d\n", pointar + 2);
    char b;
    printf("Enter a number");
    scanf("%d", &b);
    char *ptr = &b;
    printf("The value you have given is %d\n", *ptr); // samne star dite hobe.
    printf("The address of the value you have given is %p\n", &ptr);
    printf("%d\n", ptr);
    printf("%d\n", ptr + 1);

    return 0;
}
