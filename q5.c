/*WAP to input radius of circle and find its area and circumferance*/
#include<stdio.h>
void main()
{
	float r;
	
	printf("\n enter a radius of a circle : ");
	scanf("%f",&r);
	
	printf("\n area of a circle is %.4f",3.14*r*r);
	printf("\n cicumferance of a circle  is %.4f",2*3.14*r);
	
}