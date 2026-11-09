#include<stdio.h>
int main()
{
int n1,n2;
printf("Enter two Numbers:");
scanf("%d %d",&n1,&n2);
if(n1>n2){
printf("%d is Greater than %d.\n",n1,n2);
}
if(n1<n2){
printf("%d is Greater than %d.\n",n2,n1);
}
if(n1==n2){
printf("Both are Equal.\n");
}
return 0;
}


