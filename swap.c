#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the value of a");
    scanf("%d",&a);
    printf("\n enter value of b");
    scanf("%d",&b);
    int temp=a;
    a=b;
    b=temp;
    printf("\nafter swapping values: a=%d,b=%d",a,b);
    return 0;
}