#include<stdio.h>
int main()
{
int n,i,fact;
fact = 1;
printf("Enter your Number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
                fact=fact*i;
if(n>=0)
printf("Factorial = %d :)",fact);
else
printf("No factorial :(");
return 0;
}
