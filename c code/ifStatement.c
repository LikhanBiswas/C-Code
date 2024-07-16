#include<stdio.h>
#define a 18
int main()
{
    /* code */
    int b;
printf("enter your age:");
scanf("%d", &b);
if (b>a){
    printf("you can vote");

}
if (b<a){
     printf("you can not vote");
}
    return 0;
}
