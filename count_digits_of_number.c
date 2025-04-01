#include<stdio.h>

 void main()
 {
     int n1, n2 ;
     int count=0;
     printf("enter the number : ");
     scanf("%d",&n1);
     n2=n1;
     if (n1==0){
         printf("the number of digits in %d is 1",n2);
     }else{
      while(n1!=0){
          n1=n1/10;
          ++count;
      }   
      printf("the number of digits in %d is %d",n2,count);
     }
 }
