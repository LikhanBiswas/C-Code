#include <stdio.h>

int func(int *array)
{
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("the value stored in index %d is: %d\n", i, array[i]);
    }
    *(array + 2) = 789; // second call e value replace hoye jabe. pointer diye kora eta.
}

int main()
{
    /* code */
    int arr[] = {1, 10, 100, 1000};
    // printf("the value stored in the index 0 is:%d\n", arr[0]);
    func(arr);
    func(arr);
    // printf("the value stored in the index 0 is:%d", arr[0]);
    return 0;
}
