/* WAP to input two numbers. check which is Max */
#include<stdio.h>
void main()
{
	int a, b;
	
	printf("\n Enter value of a :");
	scanf("%d",&a); //10
	
	printf("\n Enter value of b :");
	scanf("%d",&b); //11
	
	if(a>b)  
   	{
		printf("\n a is Max");
	}
	else
	{
		if(a==b)
		{
			printf("\n a and b are same");
		}
		else
		{
			printf("\n b is Max");
		}
	}
}