/*WAP to count the number of spaces, tabs and new line characters in a given string.*/
#include<stdio.h>
void main()
{
	char a[20];
    int blank_char=0, tab_char=0, new_line=0;
    
    for (int i=0;i<=19;i++)
  {
    if (strcmp(i,' ')==0)
      ++blank_char;

    if (strcmp(i,'\t')==0)
	{
      ++tab_char;
    }
    if (strcmp(i,'\n')==0 )
	{
      ++new_line;
    }
  }  
  printf("blank=%d,tab=%d,newline=%d\n",blank_char,tab_char,new_line);
}