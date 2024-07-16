#include <stdio.h>
int main()
{
    /* code */

    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    int index = 0;
    int total;
    int range;
    printf("Enter your range: ");
    scanf("%d", &range);
    do
    {
        /* code */

        index++;
        total = num * index;

        printf("%d*%d=%d\n", num, index, total); // ei %d sequence follow kora lagbe . ta na hole result asbe na.

    } while (index < range); // age ekhane check kore do er vitor dhukbe.

    return 0;
}
