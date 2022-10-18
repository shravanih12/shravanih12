/*WAP to input a number and if its even then print its square otherwise print its cube*/
#include<stdio.h>
void main()
{
	int num;
	
	printf("\n Enter a number :");
	scanf("%d",&num);
	
	if(num%2==0)
	{
		printf("\n entered number is EVEN");
		printf("\n and its square is %d",num*num);
	}
	else
	{
		printf("\n entered number is ODD");
		printf("\n and its cube is %d",num*num*num);
	}
}