#include<stdio.h>
int main()
{
    /* code */
    int a, b;
    printf("enter your age:") ;
    scanf("%d", &a);
    if(a>=18){
if(a<75){
    printf("you are requested to do the job.\n");

}
else{
    printf("you are outdated");
}

}
else{
    printf("you are a kid right now");
}
    
       return 0;
}

