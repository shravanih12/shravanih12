/* WAP to read any single character and any decimal number from user. save value input by user
   in respective varaible and show using printf() function */
#include<stdio.h>
void main()
{
	char c;
	float f;
	printf("\n  Enter any single character : ");
	scanf("%c",&c);
	printf("\n Enter any decimal value : ");
	scanf("%f",&f);
	printf("\n \n \n ");
	printf("\n c=%c",c);
	printf("\n f=%.3f",f);
	
}