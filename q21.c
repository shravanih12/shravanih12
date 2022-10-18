/*WAP to input radius and input choice 1 or 2 and print area of circle for 1 and circumference for 2*/
#include<stdio.h>
void main()
{
	float r;
	int choice;
	
	printf("\n enter a radius of a circle : ");
	scanf("%f",&r);
	
	printf("\n Enter your choice (1 : area and 2 : cicumferance)");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\n Area is %.4f",3.14*r*r);
		
	}
	else if(choice==2)
	{
		printf("\n Circumferance is %.4f",2*3.14*r);
	}
	else
	{
		printf("\n Invalid input...!");
	}
}