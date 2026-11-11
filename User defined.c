#include<stdio.h>
int main()
{
int A[100][100],B[100][100],C[100][100],i,j,r,c;
printf("Enter number of Rows:");
scanf("%d",&r);
printf("Enter number of Columns:");
scanf("%d",&c);
printf("Enter elements for A matrix:");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&A[i][j]);

printf("Enter elements for B matrix:");
for(i=0;i<r;i++)
for(j=0;j<c;j++)
scanf("%d",&B[i][j]);

for(i=0;i<r;i++)
for(j=0;j<c;j++)
C[i][j]=A[i][j]+B[i][j];


printf("A matrix=\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
  printf("%d ",A[i][j]);

printf("\n");
}

printf("B matrix=\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
  printf("%d ",B[i][j]);

printf("\n");
}


printf("Addition of A and B matrix=\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
  printf("%d ",C[i][j]);

printf("\n");
}
return 0;
}
