//with arguments and with return value functions


#include <stdio.h>

int printSum(int a, int b){
    return a+b;
}


int main(){
    int a =45, b=56;
    int c = printSum(a, b);
printf("the sum is %d\n", c);
return 0;
}

