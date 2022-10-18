/* WAP to print student name, branch, scored percentage and grade using identifiers in 
   printf function */
#include<stdio.h>
void main()
{
   printf("\n %s \t %s \t %f \t %c","Sanika Bidkar","CES",90.25f,'A');
   printf("\n %s \t %s \t %f \t %c","Saniya Warake","IT",89.55f,'A');
   printf("\n %s \t %s \t %f \t %c","Shubham Kumbhar","Electronics",87.66f,'A');
   printf("\n %s \t %s \t %f \t %c","Prajyot Tonape","Electrical",85.33f,'A');
   printf("\n %s \t %s \t %f \t %c","Atharv Shetti","Mechanical",96.45f,'A');
   printf("\n %s \t %s \t %f \t %c","Samruddhi Mirajkar","Civil",80.15f,'A');
   
   printf("\n\n");
   
   
   printf("\n %30s \t %20s \t %.2f \t %c","Sanika Bidkar","CES",90.25f,'A');
   printf("\n %30s \t %20s \t %.2f \t %c","Saniya Warake","IT",89.55f,'A');
   printf("\n %30s \t %20s \t %.2f \t %c","Shubham Kumbhar","Electronics",87.66f,'A');
   printf("\n %30s \t %20s \t %.2f \t %c","Prajyot Tonape","Electrical",85.33f,'A');
   printf("\n %30s \t %20s \t %.2f \t %c","Atharv Shetti","Mechanical",96.45f,'A');
   printf("\n %30s \t %20s \t %.2f \t %c","Samruddhi Mirajkar","Civil",80.15f,'A');
}	