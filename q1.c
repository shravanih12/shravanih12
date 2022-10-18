/*WAP to input roll numbere , name ,marks and phone number of astudent and display the values*/
#include<stdio.h>
void main()
{
	int roll_no;
	char name[30];
	float marks;
	double phone_no;
	
	printf("\n enter roll number of a student : ");
	scanf("%d",&roll_no);
	printf("\n enter name of a student : ");
	scanf("%s",&name);
	printf("\n enter marks of a student : ");
	scanf("%f",&marks);
	printf("\n enter phone number of a student : ");
	scanf("%lf",&phone_no);
	
	printf("\n\n\n");
	printf("\n Student Data : \n Roll number = %d \n Name = %s \n Marks = %f \n Phone number = %lf ",roll_no , name , marks , phone_no);
}