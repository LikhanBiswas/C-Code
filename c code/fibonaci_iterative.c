#include <stdio.h>
int main()
{
    /* code */
    int current_num = 1, previous_num = 0, previous_previous_num, a;
    printf("Enter your number:");
    scanf("%d", &a);

    if (a == 0 || a == 1)
    {
        printf("The finonacci of %d is %d", a, a);
    }
    

    for (int i = 1; i < a; i++)
    {
        previous_previous_num = previous_num;
        previous_num = current_num;
        current_num = previous_num + previous_previous_num;
       // printf("The fibonacci of %d is %d", a, current_num);
    }
    printf("The fibonacci of %d is %d", a, current_num);

    return 0;
}
