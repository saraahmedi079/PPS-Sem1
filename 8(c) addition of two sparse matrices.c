#include <stdio.h>
int main()
{
int A[10][10],B[10][10];
int s1[100][3],s2[100][3],result[200][3];
int r,c;
int i, j;
int n1=0,n2=0,n3=0;
printf("Enter number of rows and columns: ");
scanf("%d %d",&r,&c);
printf("\nEnter elements of first matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("\nEnter elements of second matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&B[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if (A[i][j]!=0)
{
s1[n1][0]=i;
s1[n1][1]=j;
s1[n1][2]=A[i][j];
n1++;
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
if(B[i][j]!=0)
{
s2[n2][0]=i;
s2[n2][1]=j;
s2[n2][2]=B[i][j];
n2++;
}
}
}
i=0;
j=0;
while(i<n1&&j<n2)
{
if(s1[i][0]==s2[j][0] && s1[i][1]==s2[j][1])
{
result[n3][0]=s1[i][0];
result[n3][1]=s1[i][1];
result[n3][2]=s1[i][2]+s2[j][2];
i++;
j++;
n3++;
}
else if(s1[i][0]<s2[j][0] ||
(s1[i][0] == s2[j][0] &&
s1[i][1] < s2[j][1]))
{
result[n3][0]=s1[i][0];
result[n3][1]=s1[i][1];
result[n3][2]=s1[i][2];
i++;
n3++;
}
else
{
result[n3][0] = s2[j][0];
result[n3][1] = s2[j][1];
result[n3][2] = s2[j][2];
j++;
n3++;
}
}
while(i<n1)
{
result[n3][0]=s1[i][0];
result[n3][1]=s1[i][1];
result[n3][2]=s1[i][2];
i++;
n3++;
}
while(j<n2)
{
result[n3][0] = s2[j][0];
result[n3][1] = s2[j][1];
result[n3][2] = s2[j][2];
j++;
n3++;
}
printf("\nSparse Matrix 1:\n");
printf("Row\tColumn\tValue\n");
for(i=0;i<n1;i++)
{
printf("%d\t%d\t%d\n",
s1[i][0],s1[i][1],s1[i][2]);
}
printf("\nSparse Matrix 2:\n");
printf("Row\tColumn\tValue\n");
for(i=0;i<n2;i++)
{
printf("%d\t%d\t%d\n",
s2[i][0],s2[i][1],s2[i][2]);
}
printf("\nResultant Sparse Matrix:\n");
printf("Row\tColumn\tValue\n");
for(i=0;i<n3;i++)
{
printf("%d\t%d\t%d\n",result[i][0],result[i][1],result[i][2]);
}
return 0;
}
