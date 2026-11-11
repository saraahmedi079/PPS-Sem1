#include<stdio.h>
int main()
{
int A[2][2],T[2][2],i,j;

printf("Enter 4 elements for A matrix:");
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&A[i][j]);

for(i=0;i<2;i++)
for(j=0;j<2;j++)
T[j][i]=A[i][j];

printf("A matrix=\n");

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
  printf("%d ",A[i][j]);

printf("\n");
}

printf("Transpose of A matrix=\n");

for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
  printf("%d \t",T[i][j]);

printf("\n");
}
return 0;
}
