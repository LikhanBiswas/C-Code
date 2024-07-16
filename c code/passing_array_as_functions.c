#include <stdio.h>

int func(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("the value stored in index %d is: %d\n", i, array[i]);
    }
    array[0] = 789; /* ekhane array element copy hoye asleo 
    ekhane arry index 0 te new value deoa hoyeche tai array ekhane reflect koreche.*/
    return 0;
}

int main()
{
    /* code */
    int arr[] = {1, 10, 100, 1000};
    printf("the value stored in the index 0 is:%d\n", arr[0]);
    func(arr);
    printf("the value stored in the index 0 is:%d", arr[0]);
    return 0;
}
