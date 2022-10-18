/* WAP to input two numbers and interchange/swap their values */

#include<stdio.h>

void main()
{
	int x, y, t;
	
	printf("\n Enter first number :");
	scanf("%d",&x); //10
	
	printf("\n Enter second number :");
	scanf("%d",&y); //20
	
	printf("\n  Before swapping , \n x = %d \t y = %d", x, y);
	
	
	t = x;
	x = y;
	y = t;
	
	
	printf("\n after swapping , ");
	printf("\n x = %d \t y = %d", x, y);

	
}