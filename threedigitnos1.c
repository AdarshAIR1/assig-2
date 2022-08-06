#include<stdio.h>
int main()
{ 
    int a,b;
    int x=a;
    int rem=b ,sum=b;
    printf("enter a three dgit nos");
    scanf("%d",&a);

    rem=x%10;
    x=x/10;
    sum=sum+rem;

      rem=x%10;
    x=x/10;
    sum=sum+rem;

      rem=x%10;
    x=x/10;
    sum=sum+rem;

  
     printf("sum requred is %d",sum);
     return 0;


}