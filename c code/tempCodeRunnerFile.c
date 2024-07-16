#include <stdio.h>
int main()
{
    /* code */
    int a, b, n,rows;

    printf("If you want to see triangular star pattern, press 1\n");
    printf("If you want to see reverse triangular star pattern, press 2\n");
    scanf("%d", &b);
    

    switch (b)
    {
    case 1:
        /* code */
        printf("how much row you wanna see:");
        scanf("%d", &rows);
        for (int i = 0; i < rows; i++)
        {
            for(int j=0; j<=i; j++){
                 printf("* ");
            }
            printf("\n");
        }
        break;
    
    case 2:
    printf("how much row you wanna see:");
        scanf("%d", &rows);
        for (int i = 0; i < rows; i++)
        {
            for(int j=rows; j>i; j--){
                 printf("* ");
            }
            printf("\n");
        }
        break;

    default:
        break;
    }
    return 0;
}
