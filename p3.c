#include<stdio.h>
void main()
{
	int x,y,z;
	
	printf("\n enter 2 values :");
	scanf("%d \n %d",&x,&y);
	
	printf("\n Before swapping ");
	printf("\n x=%d and y=%d",x,y);
	
	z=x;
	x=y;
	y=z;
	
	printf("\n After swapping ");
	printf("\n x=%d and y=%d",x,y);
}