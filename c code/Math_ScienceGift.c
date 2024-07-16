#include<stdio.h>
#define a 33//pass number
int main()
{
    /* code */
    int science_marks, math_marks;
    printf("enter you science marks:\n");
    scanf("%d", &science_marks);
    printf("enter you math marks:\n");
    scanf("%d", &math_marks);

    if(science_marks>=33 && math_marks>=33){
        printf("you have passed at both math and science. hence you have been given 45 taka \n");

    }
    else if(math_marks>=33){
        printf("you have passed at only math . hence you have been given 15 taka \n");
    }
    else if(science_marks>=33){
        printf("you have passed at only science . hence you have been given 15 taka \n");
    return 0;
}
}
