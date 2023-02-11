#include<stdio.h>
void main()
{
   int i,j,rows;
	char ch='A';
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=0;i<=rows;i++)
   {
	for(j=rows;j>=i;j--)
    {
	   printf("%c ",ch+j);
    }
	printf("\n");
   }
}

