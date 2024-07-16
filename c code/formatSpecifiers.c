#include<stdio.h>
int main()
{
    /* code */
    int a = 6;
    float b= 5.78;
    printf("The value of a is: %d\n", a );
    printf(" %f\n", b ); //float print korar jonno

    printf(" %5.6f\n", b );// samne spaace rekhe print tobe space rakhar jonno value theke boro value %f e dite hobe.
    printf("%-8.6f\n", b );// pichone space rekhe print korar jonno
    return 0;
}
