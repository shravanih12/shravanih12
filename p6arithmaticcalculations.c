/* WAP to input two integer numbers and show their addition, subtraction, multiplication, 
   division and remainder */
   
#include<stdio.h>

void main()
{
	int a, b;
	int sum, subt, mult, idiv, rem;
	float fdiv;
	
	printf("\n Enter value of a :");
	scanf("%d",&a);
	
	printf("\n Enter value of b :");
	scanf("%d",&b);
	
	sum = a + b;
	printf("\n addition = %d", sum);
	
	subt = a - b;
	printf("\n subtraction = %d", subt);
	
	mult = a * b;
	printf("\n multiplication = %d", mult);
	
	idiv = a/b;
	printf("\n integer division = %d", idiv);
	
	fdiv = (float)a/b;
	printf("\n float division = %.2f", fdiv);
	
	rem = a%b;
	printf("\n remainder = %d", rem);
	
}

