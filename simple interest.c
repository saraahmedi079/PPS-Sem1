#include<stdio.h>
int main()
{
    float P,T,R,si;
    printf("enter the values");
    scanf("%f %f %f",&P,&T,&R);

    si=(P*T*R)/100;
    printf("simpleinterest=%f",si);
    return 0;
}
