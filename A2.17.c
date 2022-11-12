/*WAP to find out the sum and difference of two matrices*/
#include <stdio.h>
void main()
{
	
   int i,j,r1,c1, a[10][10], b[10][10];
   printf("\n Enter Order of Matrix A & B: ");
   scanf("%d %d", &r1, &c1);
   printf("\n Enter Elements of Matrix of A: ");
   for( i=0; i< r1; i++)
   {
       for( j=0; j<c1; j++)
           scanf("%d", &a[ i ][ j ]);
   }
   printf("\n Enter Elements of Matrix of B:");
   for( i=0; i< r1; i++)
  {
       for( j=0; j < c1; j++)
            scanf("%d", &b[ i ][ j ]);
  }
    printf("\n Matrix Addition");
    for( i=0; i< r1; i++)
   {
        for( j=0; j < c1; j++)
           printf("%d\t", a[ i ][ j ] + b[ i ][ j ]);
     printf ("\n");
   }
   printf("\n Matrix Subtraction/Difference"); 
  for( i=0; i< r1; i++)
  {
      for( j=0; j < c1; j++)
           printf("%d\t", a[ i ][ j ] - b[ i ][ j ]);
           printf("\n");
   }
}