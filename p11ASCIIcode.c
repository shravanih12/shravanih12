/* WAP to input any character and find its ASCII Code
   American Standard Code for Information Interchange  */
   
#include<stdio.h>

void main()
{
	char ch;
	int code;
	
	printf("\n Enter any character :");
	scanf("%c",&ch); //a
	
	code = (int)ch;
	
	printf("\n ASCII Code = %d", code);
}

/* Notes
A to Z		: 65 to 90
a to z 		: 97 to 122
'0' to '9'	: 48 to 57
Special Characters : -128 to 47, 58 to 64, 91 to 96, 123 ro 127
*/