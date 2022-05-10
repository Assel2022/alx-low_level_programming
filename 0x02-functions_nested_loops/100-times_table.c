#include <stdio.h>
#include "main.h"
/**
* print_times_table - printing
* @n: n
*/
n=5;
int row;
int col;
int table [row][col];
int i,j;
for (i = 0; i<=15; i++)
{
for (j=0; j<=15; j++)
{
table [i][j]= i*j;
}
}
for(i = 0; i<=15; i++)
{
for(j=0; j<=15; j++)
{
printf("%d%",table[i][j]);
}
}
