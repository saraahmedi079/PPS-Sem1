#include<stdio.h>
int main()
{
int n,i,rem,arm,temp;
arm=0;
printf("Enter Number:");
scanf("%d",&n);
temp=n;
while(n!=0)
{
                rem=n%10;
                arm=arm*10+rem*rem*rem;
                n=n/10;
}
if(arm==temp)
printf("Given number is Armstrong");
else
printf("Given number is Not Armstrong");

return 0;
}
