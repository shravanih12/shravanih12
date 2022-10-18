/*WAP to input inches and convert into yards and feet*/
#include<stdio.h>
void main()
{
	float inch , yard, feet;
	printf("\n Enter inches :");
    scanf("%f",&inch);
    feet = inch / 12;
    yard = inch / 36;
    printf("\n Distance in feet : %.3f",feet);
    printf("\n Distance in yard : %.3f",yard);
    
}