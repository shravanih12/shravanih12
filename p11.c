/*WAP to input a character and print its ASCII value*/
#include<stdio.h>

void main()
{
	char ch;
	int code;
	
	printf("\n Enter any character :");
	scanf("%c",&ch); 
	
	code = (int)ch;
	
	printf("\n ASCII Code = %d", code);
}
