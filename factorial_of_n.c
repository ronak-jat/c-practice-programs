#include<stdio.h>

void main()
{
    int i,n, fac=1;
    printf("enter the number whose factorial you want to know : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
       fac=fac*i;
    }
    printf("The factorial of %d is %d", n, fac);
}
