/* WAP to input percentage scored by student in final Exam. Check whether student is Pass or Fail */

#include<stdio.h>

void main()
{
	float pert;
	
	printf("\n Enter Percentage Scored by student in last Exam :");
	scanf("%f",&pert);
	
	if(pert>=40)
	{
		printf("\n Congradulations! Pass");
	}
	else
	{
		printf("\n Sorry! you are fail");
	}
}