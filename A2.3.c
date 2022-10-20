/*WAP to convert a small letter into capital letter and vice versa */
#include<stdio.h>
#include<string.h>
void main()
{
	char a;
	printf("\n Enter the string :");
	scanf("%s",&a);
	strlwr(a);
	printf("\n String in lowercase is %s",a);
	strupr(a);
	printf("\n String in uppercase is %s",a);
}