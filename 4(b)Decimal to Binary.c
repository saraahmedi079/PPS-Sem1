#include<stdio.h>
int main()
{
int deci,bin=0,i=1,rem;
printf("Enter Number in Decimal:");
scanf("%d",&deci);
while(deci!=0)
{
rem=deci%2;
deci=deci/2;
bin=bin+rem*i;
i=i*10;
}
printf("Binary Value is = %d",bin);

return 0;
}
