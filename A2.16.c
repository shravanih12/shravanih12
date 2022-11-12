/*WAP to delete duplicate elements from an array*/
#include <stdio.h>  
void main ()  
{   
    int x[5]={1 , 2 , 3 , 3 ,5 };
    int y[5]={-1 , -1 , -1 , -1 , -1 };
    int i,j;
    
    for(i=0;i<5;i++)
    {
    	for(j=0;j<5;j++)
    	{
    		if(y[i]!=x[j])
    	      y[i]=x[j];
		}
	}
    for(i=0;i<5;i++)
    {
    	printf("%d",y[i]);
	}
    
} 