/* WAP to input a 3 digit number and print its digits addition */

#include<stdio.h>

void main()
{
	int no; //132
	int a, b, c, sum;
	
	printf("\n Enter 3 digit number :");
	scanf("%d",&no);
	
	c = no%10;
	b = (no/10)%10; //3
	a = no/100; //1
	
	printf("\n a = %d \t b = %d \t c = %d", a, b, c);
	
	sum = a + b + c;
	printf("\n Addition of all digits = %d", sum);
	
	
}