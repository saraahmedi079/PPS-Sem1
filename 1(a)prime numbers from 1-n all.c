#include<stdio.h>
int main()
{
 int i,c,n,j;
 printf("Enter your number to generate Prime Numbers:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 c=0;
 for(j=1;j<=i;j++)
 {
    if(i%j==0)
     c++;
    }
    if(c==2)
   printf("%d\t\n",i);
 }
 return 0;
 }





