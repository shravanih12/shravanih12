/*WAP to input 2 numbers and print the greatest using conditional operators*/
#include<stdio.h>
void main()
{
	int x,y,greatest_value;
	printf("\n Enter first number :");
    scanf("%d",&x);
    printf("\n Enter second number :");
    scanf("%d",&y);
    
    greatest_value= (x>y)? x : y ;
    
    printf("\n greatest value is %d",greatest_value);
}