#include<stdio.h>
int main()
{
int S[5],i,sum=0;
printf("Enter 5 elements:");
for(i=0;i<5;i++)
scanf("%d",&S[i]);
for(i=0;i<5;i++)
sum=sum+S[i];
printf("Sum of the Elements= %d",sum);
return 0;
}
