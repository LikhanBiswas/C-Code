#include<stdio.h>
//#define a 18
int main()
{
    /* code */
    int age;
printf("enter your age:");
scanf("%d", &age);
printf("you have entered %d as your age\n", age);
if (age>=18){
    printf("you can vote");

}
else if(age>=10){
printf("you are not even a teenager");
}
else if(age<3){
printf("you just born");
}
else{
     printf("you can not vote");
}
    return 0;
}
