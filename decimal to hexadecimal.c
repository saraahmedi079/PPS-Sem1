#include<stdio.h>
int main()
{
int deci,hexa=0,i=1,rem;
printf("Enter Number in Decimal:");
scanf("%d",&deci);
while(deci!=0)
{
rem=deci%16;
deci=deci/16;
hexa=hexa+rem*i;
i=i*10;
}
printf("Hexadecimal Value is = %d",hexa);

return 0;
}
