#include <stdio.h>
int main()
{
    /* code */
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        /* code */
        printf("YOUR age is 3");

        break;
    case 13:
        /* code */
        printf("YOUR age is 13");
        break;
    case 23:
        /* code */
        printf("YOUR age is 23");
        break;
    default:
        printf("your age is not 3,13,23");
    }
    return 0;
}
