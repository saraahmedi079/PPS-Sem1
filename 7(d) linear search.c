#include<stdio.h>
int main()
{
int n,key,i,s=0,A[100];
printf("Enter size of n elements:");
scanf("%d",&n);
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
scanf("%d",&A[i]);
printf("Enter searching element:");
scanf("%d",&key);

for(i=0;i<n;i++)
{
if(key==A[i])
{
s=1;
printf("Element found at %d.",i);
break;
}
}
if(s==0)
printf("Element is not available.");
return 0;
}
