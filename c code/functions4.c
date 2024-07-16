//No Argument and No Return Value 
#include<stdio.h>

void Star_pattern() //kono artgument nai
{ 
	int a; 
	printf("Enter how many stars(*) you want : \n"); /* In this both declaration and definition of function are done together.*/ 
	scanf("%d", &a ); 
	for (int i = 0; i<a; i++) 
	{
		printf("*"); 
	} 
}
int main()
{
    /* code */
    Star_pattern() ;//kono return value nai
    
}
 
 
