/*WAP to input width and height of a rectangle and find its area and perimeter*/
#include<stdio.h>
void main()
{
	float wd,ht;
	
	printf("\n enter a width of avrectangle : ");
	scanf("%f",&wd);
	
	printf("\n enter a height of avrectangle : ");
	scanf("%f",&ht);
	
	printf("\n area of a rectangle is %.4f",wd*ht);
	printf("\n perimeter of rectangle  is %.4f",2*(wd+ht));
	
}