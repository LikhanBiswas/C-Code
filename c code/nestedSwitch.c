#include<stdio.h>
int main()
{
    /* code */
    char age;
    printf("Enter your age:");
    scanf("%d", &age);
    char marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
    switch (age)                                    
    {
    case 3:
        /* code */
        switch (marks)
        {
        case 45 /* constant-expression */:
            /* code */
            printf("your marks are 45 \n your age is 3");
            break;
        
        default:
        printf("your marks are not 45 \n your age is 3");
            break;
        }
        

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
