/*WAP to find out greatest of three number using conditional operator*/
#include<stdio.h>
void main()
{
	int a,b,c,greatest;
	printf("\n Enter Three numbers :");
	printf("\n First number : ");
	scanf("%d",&a);
    printf("\n Second number : ");
	scanf("%d",&b);
	printf("\n Third number : ");
	scanf("%d",&c);
	
	greatest= a > b ? (a > c ? a : c) : (b > c ? b : c) ;
	printf("\n The greatest number is : %d", greatest);
}
