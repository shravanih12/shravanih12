/* WAP to input marks of student and print the result (pass/fail) using conditinal operator*/
#include<stdio.h>
void main()
{
	float marks;
	int result;
	printf("\n Enter marks of a student (in percentage) :");
	scanf("%f",&marks);
	result = (marks>40)?"Pass":"Fail";
	printf("\n result = ",result);
	
}