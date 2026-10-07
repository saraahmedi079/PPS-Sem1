#include<stdio.h>
int main()
{
int n1,n2;
char op;
printf("Enter your values for n1 and n2:");
scanf("%d %d",&n1,&n2);

printf("Enter Operators:");
scanf(" %c ",&op);

switch(op)
{
case'+':
                printf("Sum=%d",n1+n2);
                break;
case'-':
                printf("Diffrence=%d",n1-n2);
                break;
case'*':
                printf("Product=%d",n1*n2);
                break;
case'/':
                printf("Division=%d",n1/n2);
                break;
default:
                printf("Invalid Operator");
}
return 0;
}
