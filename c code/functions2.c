// with arguments and without return value functions
#include <stdio.h>

void printSum(int n)// eta with arguments karon etar bracket er vitor arguments niche
{ // void karon eta kono value return kore na

    for (int i = 0; i < n; i++)
    {

        printf("%c\n", '*');
    }

    // printf("%c", '*');
}

int main()
{
    /* code */

    printSum(8);// etar return value nai karon etar return type nai kichui. tai without return value. 
}
