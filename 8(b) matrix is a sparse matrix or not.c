#include <stdio.h>
int main()
{
int A[10][10];
int r,c;
int i,j;
int zc=0;
int nzc=0;
printf("Enter number of rows and columns: ");
scanf("%d %d",&r,&c);
printf("Enter matrix elements:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
if (A[i][j] == 0)
{
zc++;
}
else
{
nzc++;
}
}
}
printf("\nThe Matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
if (zc>nzc)
{
printf("\nThe matrix is a sparse matrix.\n");
}
else
{
printf("\nThe matrix is not a sparse matrix.\n");
}
return 0;
}
