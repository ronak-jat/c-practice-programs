#include<stdio.h>

 void main()
 {
     int n1 , n2 ;
     int sum=0,digit=0;
     printf("enter the number : ");
     scanf("%d",&n1);
     n2=n1;
     if (n1==0){
         printf("the sum of  %d is 0",n2);
     }else{
      while(n1!=0){
          digit=n1%10;
          sum=sum+digit;
          n1=n1/10;
      }   
      printf("the sum of digits of %d is %d",n2,sum);
     }
 }
