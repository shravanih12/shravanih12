/* Ass: WAP to print product id, product name, price, qtys and total using saperate
   print functions with the help of identifiers - %d, %s, %c and %f */
#include<stdio.h>
void main()	
{
	printf("\n %d \t %s \t %f \t %d \t %f",8000, "Processor", 2000.00f, 3, 2000.00f*3);
	printf("\n %d \t %s \t %f \t %d \t %f",50, "Moniter", 200.00f, 11, 200.00f*11);
	printf("\n %d \t %s \t %f \t %d \t %f", 660, "RAM", 500.00f, 2, 500.00f*2);

	printf("\n\n");

	printf("\n %10d %20s %10.2f %10d %10.2f",8000, "Processor", 2000.00f, 3, 2000.00f*3);
	printf("\n %10d %20s %10.2f %10d %10.2f",50 ,"Moniter", 200.00f, 11, 200.00f*11);
	printf("\n %10d %20s %10.2f %10d %10.2f", 660, "RAM", 500.00f, 2, 500.00f*2);
}
