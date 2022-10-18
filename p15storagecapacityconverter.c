/* WAP to input storage capacity in gigabytes and convert to mb, kb, bytes and in bits 
   8 bits			: 1 byte
   1024 bytes		: 1 Kilobyte
   1024 kb			: 1 mega bytes
   1024 mb			: 1 giga byte 
*/

#include<stdio.h>
void main()
{
	int gb;
	long mb;
	double kb;
	long double bytes,bits;
	
	printf("\n Enter storage in gigabytes :");
	scanf("%d",&gb); //1
	
	mb = gb*1024;
	printf("\n In megabytes = %ld", mb);
	
	kb = mb*1024;
	printf("\n In kilobytes = %lf",kb);
	
	bytes = (long double)kb*1024;
	printf("\n In bytes = %Lf" ,bytes);
	
	bits=(long double)bytes*8;
	printf("\n In bits = %Lf", bits);

}