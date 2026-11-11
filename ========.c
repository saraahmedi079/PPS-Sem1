#include<stdio.h>
int main()
{
int A[3][3],B[3][3],C[3][3],i,j;

printf("Enter 9 elements for A matrix:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&A[i][j]);

printf("Enter 9 elements for B matrix:");
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&B[i][j]);

for(i=0;i<3;i++)
for(j=0;j<3;j++)
C[i][j]=A[i][j]+B[i][j];


printf("A matrix=\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
  printf("%d ",A[i][j]);

printf("\n");
}

printf("B matrix=\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
  printf("%d ",B[i][j]);

printf("\n");
}


printf("Addition of A and B matrix=\n");

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
  printf("%d ",C[i][j]);

printf("\n");
}
return 0;
}

