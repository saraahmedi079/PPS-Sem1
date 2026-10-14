#include<stdio.h>
#include<math.h>
void main()
{
int n,i,m=1,f,j,sign=1;
float xdeg,s=0,xrad,p;
printf("Enter number of steps:");
scanf("%d",&n);
printf("Enter Angle Value:");
scanf("%f",&xdeg);
xrad=xdeg*3.14/180;

for(i=1;i<=n;i++)
{
f=1;
for(i=1;i<=m;i++)
f=f*i;
p=(sign)*pow(xrad,m);

s=s+(p/f);
sign=(-1)*sign;
m=m+2;
}
printf("Value=%f",s);
}
