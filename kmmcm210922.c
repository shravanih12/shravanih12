/*WAP to input distance between two cities in kilometers and convert  to meter,centimeter,inches and feet*/
#include<stdio.h>
void main()
{
	
	int km;
    long	meter,cm;
    float inche,feet;
	
	printf("\n enter distance in kilometers :");
	scanf("%d",&km);
	
	meter=km*1000;
	printf("\n In meter = %ld",meter);
	
	cm=meter*100;
	printf("\n  In centimeter = %ld ",cm);
	
	inch=cm/2.5f;
	printf(" \n In inches = %.2f",inch);
	
	feet=inch/12.0f;
	printf("\n In feet = %.2f",feet);
	
	
}