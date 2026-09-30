#include<stdio.h>
int main()
{
int n,rem,arm,temp;
arm=0;
printf("Enter Number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
     rem=temp % 10;
    arm=arm+(rem*rem*rem);
    temp=temp/10;
}
if(arm==n)
printf("Given number is Armstrong");
else
printf("Given number is Not Armstrong");

return 0;
}
