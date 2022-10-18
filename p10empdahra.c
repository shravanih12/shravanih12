/* WAP to input Employee Name and Salary. Calcualte DA and HRA 5% & 11% respectively. print allowance and
   gross salary of employee */
   
#include<stdio.h>

void main()
{
	char emp_name[20];
	int salary;
	float da, hra, gross_salary;
	
	printf("\n Enter Employee Name :");
	scanf("%s",&emp_name);
	
	printf("\n Enter Salary :");
	scanf("%d",&salary); //10000
	
	da = salary*5/100.00f;
	hra = salary*11/100.00f;
	
	printf("\n Dearness allowance = Rs.%.2f", da);
	printf("\n House Rent allowance = Rs.%.2f",hra);
	
	gross_salary = salary + da + hra;
	printf("\n Gross Income = Rs. %.2f", gross_salary);
	
	
}