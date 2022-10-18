/* WAP to input distance between two cities in kilometers and convert to meter, centimeter, 
   inches and feet */
   
#include<stdio.h>

void main()
{
	int km;
	long meter, cm;
	float inch, feet;
	
	printf("\n Enter Distance in Kilometers :");
	scanf("%d",&km); //1
	
	meter = km*1000;
	printf("\n In meter = %ld", meter);
	
	cm = meter*100;
	printf("\n In Centimeter = %ld",cm);
	
	inch = cm/2.54f;
	printf("\n In Inches = %.2f" ,inch);
	
	feet = inch/12.0f;
	printf("\n In Feet = %.2f", feet);

}
