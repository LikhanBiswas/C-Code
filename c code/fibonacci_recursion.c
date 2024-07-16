#include<stdio.h>
int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{
    /* code */
    int number;
    printf("Enter your number:");
    scanf("%d", &number);
    printf("The Fibonacci of %d is %d", number, fibo(number));
    return 0;
}
