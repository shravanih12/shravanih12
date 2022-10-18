/* Ass1: WAP to perform area calculation for circle, triangle, rectangle and square 
   using switch case menus */
#include<stdio.h>
void main()
{   
    int choice;
    float radius,base,height,length,breadth,side;
	printf("\n choose your shape :");
    printf("\n 1. Circle");
	printf("\n 2. Triangle");
	printf("\n 3. Rectangle");
	printf("\n 4. Square");
	
	printf("\n Enter Choice :");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 :
			printf("\n Enter radius of a circle :");
			scanf("%f",&radius);
			printf("\n Area of circle is %.3f",3.14*radius*radius);
			break ;
						
		case 2:
			printf("\n Enter height of a triangle :");
			scanf("%f",&height);
			printf("\n Enter base of a triangle :");
			scanf("%f",&base);
			printf("\n Area of triangle is %.3f",0.5*height*base);
			break ;
			
		case 3:
			printf("\n Enter lenghth of a reactangle :");
			scanf("%f",&length);
			printf("\n Enter breadth of a reactangle :");
			scanf("%f",&breadth);
			printf("\n Area of rectangle is %.3f",length*breadth);	
			break ;
			
		case 4:
			printf("\n Enter side of a square:");
			scanf("%f",&side);
			printf("\n Area of square is %.3f",side*side); 
			break ;
			
		default:
			printf("\n Invalid Choice");
	}
}