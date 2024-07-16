// without arguments and with return value

#include <stdio.h>

int takeNumber()//bracket e kichu nai mane eta without arguments
{
    int i;
    printf("Enter your number:");
    scanf("%d", &i);
    return i;// eta value return kore 
}
int main()
{
    int c;
    
    printf("The number number you have entered is: %d", c = takeNumber());
}
