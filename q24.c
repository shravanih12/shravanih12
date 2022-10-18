/*WAP to input temperature in fahrenheit and convert into celsius*/
#include<stdio.h>

void main()
{
	float fah, centi;
	
	printf("\n Enter Temp. in fahreinheits :");
	scanf("%f",&fah);
	
	//1 fah = -17.22 centigrade.
	
	centi = 5*(fah-32)/9;
	
	printf("\n Temp. in centigrade = %.2f", centi);
}
