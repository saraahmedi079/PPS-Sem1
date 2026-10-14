#include<stdio.h>
int gcd(int n1,int n2);
int main()
{
int a,b,GCD;
printf("Enter your numbers:");
scanf("%d %d",&a,&b);
GCD=gcd(a,b);
printf("GCD of %d and %d is %d",a,b,GCD);
return 0;
}
int gcd(int n1,int n2)
{
if (n2!=0)
return gcd(n2,n1%n2);
return n1;
}
