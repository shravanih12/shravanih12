/*WAP to print the factorial of a given number.*/
#include<stdio.h>
void main()
{
	int num,fact=1;
	printf("\n Enter a  number ");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
	  fact=fact*i;
	printf("\n Factorial of a number is %d",fact);  
    
}