/* WAP to input any number. check whether the number is positive, negative or zero */

#include<stdio.h>

void main()
{
	int no;
	
	printf("\n Enter any number :");
	scanf("%d",&no);  //43
	
	if(no>0)
	{
		printf("\n Number is Positive");
	}
	
	if(no<0)
	{
		printf("\n Number is Negative");
	}
	
	
	if(no==0)
	{
		printf("\n Number is Zero");
	}
}