/* Math Header file functions*/
#include<stdio.h>
#include<math.h>
void main()
{
	//1.pow-to find nth power of a number
	printf("\n nth power=%.3lf",pow(5.7,2.5));
	
	//2.sqrt-to find square root of a number
	printf("\n square root of a number=%.3lf",sqrt(25));
	
	//3.floor-find nearest min integer
	printf("\n round up to nearest previous integer = %.2lf",floor(12.76));
	
	//4.ceil-find nearest next integer
	printf("\n round up to nearest next integer = %.2lf",ceil(12.76));
	
	//5.log10
	printf("\n find log value of a number = %.2lf",log10(15));
	
    //6.log-natural log
    printf("\n find natural log value of a number = %.2lf",log10(15));
    
    //7.sine 
    printf("\n find sine value of a number = %.2lf",sin(15));

    //8.cosine
    printf("\n find cosine value of a number = %.2lf",cos(15));
    
    //9.tan
    printf("\n find tangent value of a number = %.2lf",tan(15));
    
    //10.exp-exponential value
    printf("\n find exponential value of a number = %.2lf",exp(-1));
}