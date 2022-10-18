/*WAP to input days and find years and weeks and days*/
#include<stdio.h>
void main()
{
	int total,year,week_1,week_2,days;
	printf("\n Enter total number of days : ");
	scanf("%d",&total);

	year=total/365;
	week_1=total/7;
	week_2=(total%365)/7;
	days=(total%365)%7;
	
	printf("\ntotal period = %d years %d weeks  and %d days",year,week_2,days);
	printf("\n total number of week in given time is %d",week_1);
}