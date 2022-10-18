/* WAP to ask user to input username1 and username2. compare and check whether they are same
   or distinct   (try with any alphabate case) */
#include<stdio.h>
#include<string.h>
void main()
{
	char n1[30],n2[30];
	printf("\n Enter 1st name : ");
	scanf("%s",&n1);
	printf("\n Enter 2nd name : ");
	scanf("%s",&n2);
	strlwr(n1);
	strlwr(n2);
	if(strcmp(n1,n2)==0)
	printf("\n Similar names");
	else
	printf("\n distinct names");
	
}