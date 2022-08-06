#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("enter a nos ");
    scanf("%d",&a);
    printf("enter the digit ");
    scanf("%d",&b);
    a=(a*10);
    a=a+b;
    printf("result required is %d",a);
    printf("\n");
    return 0;
}
