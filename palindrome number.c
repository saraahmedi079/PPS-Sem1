#include<stdio.h>
int main()
{

int n,rev,rem,temp;
rev = 0;
printf("Enter a Number:");
scanf("%d",&n);

temp=n;

while(n>0)
{
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
}
if(temp==rev)
    printf("%d is a Palindrome",temp);
else
    printf("%d is Not a Palindrome",temp);

    return 0;
}
