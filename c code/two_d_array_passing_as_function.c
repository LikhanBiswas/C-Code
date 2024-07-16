#include <stdio.h>

int func(int array[2][4])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            /* code */
            printf("the value stored in index %d,%d is: %d\n", i, j, array[i][j]);
        }

        /* code */
    }
    array[0][3] = 789; // second call e value replace hoye jabe. pointer diye kora eta.
}

int main()
{
    /* code */
    int arr[2][4] = {{1, 10, 100, 1000}, {11, 121, 131, 141}};
    func(arr);
    func(arr);

    return 0;
}
