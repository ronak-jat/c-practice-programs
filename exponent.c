#include<stdio.h>

void main()
{
    int i,base,power,r=1;
    printf("enter base number : ");
    scanf("%d",&base);
    printf("enter power of base number : ");
    scanf("%d",&power);
    for (i=1;i<=power;i++){
        r=r*base;
    }
    printf("%d",r);
}
