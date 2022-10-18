/* Ass: WAP to input two numbers and interchange/swap without extra variable */#include<stdio.h>

void main()
{
	int x, y, t;
	
	printf("\n Enter first number :");
	scanf("%d",&x); //10
	
	printf("\n Enter second number :");
	scanf("%d",&y); //20
	
	printf("\n  Before swapping , \n x = %d \t y = %d", x, y);
	
	
	x=x+y;
	y=x-y;
	x=x-y;	
	
	printf("\n After swapping , ");
	printf("\n x = %d \t y = %d", x, y);

	
}