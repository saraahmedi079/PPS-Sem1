#include<stdio.h>
#include<math.h>
int main()
{
int deci=0,bin,i=0,rem;
printf("Enter Number in Binary (i.e, 0's and 1's):");
scanf("%d",&bin);
while(bin!=0)
{
                rem=bin%10;
                bin=bin/10;
                deci=deci+rem*pow(2,i);
                i++;
}
printf("Decimal Value is = %d",deci);

return 0;

}
