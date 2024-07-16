#include <stdio.h>
int main()
{

    int a[2][4] = {{46, 56, 56, 78}, {5, 9, 50, 569}}; // second upay given array print korar

    for (int i = 0; i < 2; i++)//i<2 because 2 row
    {
        for (int j = 0; j < 4; j++)//j<4 because 4 column
        {
            // printf("The value of %d,%d element of the array is: %d\n ", i,j, a[i][j]);
            printf("%d ", a[i][j]);// matrix print
        }

        printf("\n");
    }
}
