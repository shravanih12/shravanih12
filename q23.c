/*WAP to input employee code,name and basic salary and calculate the given values*/
#include<stdio.h>
void main()
{
	int code;
	float salary,HRA,DA,CCA,GS,PF,IT,NS;
	char name[30];
	
	printf("\n Enter code of employee :");
	scanf("%d",&code);
	printf("\n Enter name of employee : ");
	scanf("%s",&name);
	printf("\n Enter basic salary of employee :");
	scanf("%f",&salary);
	
	HRA=salary*40/100;
	DA= salary*10/100;
	CCA=salary*5/100;
	GS=salary+HRA+DA+CCA;
	PF=GS*10/100;
	IT=GS*10/100;
	NS=GS-(PF+IT);
	
	printf("\n HRA = %.4f \n DA = %.4f \n CCA = %.4f \n GS = %.4f \n PF = %.4f \n IT = %.4f \n NS = %.4f",HRA,DA,CCA,GS,PF,IT,NS);
	
}