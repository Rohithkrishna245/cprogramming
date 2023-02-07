#include<stdio.h>
void main (){
  int a,b,t;
  printf("enter the value of a: ");
  scanf("%d",&a);
  printf("enter the value of b: ");
  scanf("%d",&b);

   t=a;
   a=b;
   b=t;
   printf("%d %d",a,b);
 }
