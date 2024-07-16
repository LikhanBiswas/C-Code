// without arguments and without return value

#include <stdio.h>

void printSum() /* eta without arguments karon etar bracket er
 vitor arguments nicche na*/
{               // void karon eta kono value return kore na

    int n;
    printf("Enter your number:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {

        printf("*");
    }

    // printf("%c", '*');
}