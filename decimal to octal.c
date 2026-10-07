#include<stdio.h>
int main()
{
int deci,oct=0,i=1,rem;
printf("Enter Number in Decimal:");
scanf("%d",&deci);
while(deci!=0)
{
rem=deci%8;
deci=deci/8;
oct=oct+rem*i;
i=i*10;
}
printf("Octal Value is = %d",oct);

return 0;
}
