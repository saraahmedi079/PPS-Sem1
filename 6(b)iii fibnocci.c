#include<stdio.h>
int fib(int n);
int main()
{
int m,i;
printf("Enter your number:");
scanf("%d",&m);
printf("Fibnonacci Series is \n",m);
for(i=0;i<m;i++)
{
printf("%d",fib(i));
}
return 0;
}
int fib(int n)
{
if (n==0)
return 0;
if(n==1)
return 1;
return fib(n-1)+fib(n-2);
}

