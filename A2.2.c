/*WAP to input two integers and determine that first is multiple if second */
#include<stdio.h>
void main()
{
	int a,b;
	printf("\n Enter first number : ");
	scanf("%d",&a);
	printf("\n Enter second number : ");
	scanf("%d",&b);
	if(a%b==0)
	{
		printf("\n %d is multiple of %d",a,b);
	}
	else
	{
		printf("\n %d in not multiple of %d",a,b);
	}
	
}