#include<stdio.h>
#define a 18
int main()
{
    /* code */
    int age;
printf("enter your age:");
scanf("%d", &age);
printf("you have entered %d as your age\n", age);
if (age>=a){
    printf("you can vote");

}
else{
     printf("you can not vote");
}
    return 0;
}
