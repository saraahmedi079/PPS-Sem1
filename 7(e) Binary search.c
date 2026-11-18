#include<stdio.h>
int main()
{
int A[100],n,i,low,high,mid,key,found=0;

printf("Enter size of n elements:");
scanf("%d",&n);

printf("Enter %d elements in sorted manner:",n);
for(i=0;i<n;i++){
scanf("%d",&A[i]);
}
printf("Array is:\n");
for(i=0;i<n;i++)
{
printf("%d ",A[i]);
}
printf("\nEnter searching element:");
scanf("%d",&key);

low=0;
high=n-1;

while(low <=high)
{
mid=(low+high)/2;
if(A[mid]==key)
{
found=1;
printf("Value found at %d position.",mid+1);
break;
}
else if(key<A[mid])
{
high=mid-1;
}
else
{
low=mid+1;
}
}
if(found==0)
printf("Value not found.");

return 0;

}
