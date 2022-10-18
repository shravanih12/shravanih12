/* WAP to input employee gender and age. check whether employee is eligible for insuarance or
   not in following conditions 
   a. Employee is male and age >=25
   b. Employee is female and age >=21     */
#include<stdio.h>
#include<string.h>
void main()
{
	char gender[20];
	int age;
	
	printf("\n Enter gender :");
	scanf("%s",&gender);
	
	printf("\n Enter age :");
	scanf("%d",&age);
	
	//c programming not supports == to compare string.
	
	if(  strcmp(gender, "male") == 0   )
	{
		if(age>=25)
		{
			printf("\n Male Employee is eligible for insuarance");
		}
		else
		{
			printf("\n Male Employee is not eligible for insuarance");
		}
	}
	else if(  strcmp(gender, "female") == 0 )
	{
		if(age>=21)
		{
			printf("\n Female Employee is Elegible for insurance");
		}
		else
		{
			printf("\n Female employee is not eligible for insuarance");
		}
	}
	else
	{
		printf("\n Invalid Input");
	}
	
}