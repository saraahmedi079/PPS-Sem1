#include<stdio.h>
int main()
{
int M[3][3],i,j,z=0,nz=0;
printf("Enter 3x3 matrix elements:");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&M[i][j]);
if(M[i][j]==0)
z++;
else
nz++;
}
}
printf("Matrix M:\n");
for(i=0;i<3;i++){
                for(j=0;j<3;j++)
                printf("%d ",M[i][j]);
                printf("\n");
}
printf("Number of Non-zero elements= %d\n",nz);
printf("Number of Zeros= %d\n",z);

if(z>nz)
printf("Matrix is Sparse.\n");
else
printf("\nGiven Matrix is not Sparse.\n");

 return 0;
}
