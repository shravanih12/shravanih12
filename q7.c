/*WAP to input 4 integers and check wheather the equation is satisfied or not*/
#include<stdio.h>
void main()
{
	int a,b,c,d,LHS,RHS;
	printf("\n Ented 4 numbers :");
	scanf("%d \n %d \n %d \n %d",&a,&b,&c,&d);
	
	LHS=3*a+3*b+3*c;
	RHS=3*d;
	
	if(LHS==RHS)
	{
		printf("\n Equation is satisfied");
		
	}
	else
	{
		printf("\n Equation is not satisfied");
		
	}
}