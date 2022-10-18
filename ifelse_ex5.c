/* WAP to input student percentage and print grades checking following conditions
   a. Score >=75 : Distinction
   b. Score >=60 : First Class
   c. Score >=50 : Second Class
   d. Score >=40 : Pass
   e. Otherwise "Fail"  */
#include<stdio.h>
void main()
{
	float pert;
	
	printf("\n Enter Percentage :");
	scanf("%f",&pert);
	
	if(pert>=75)
	{
		printf("\n Student Scored 'Distinction' grade");
	}
	else if(pert>=60)
	{
		printf("\n Student Scored First Class' grade");
	}
	else if(pert>=50)
	{
		printf("\n Student Scored 'Second Class' grade");
	}
	else if(pert>=40)
	{
		printf("\n Student is 'Pass'");
	}
	else
	{
		printf("\n Student is fail");
	}
}