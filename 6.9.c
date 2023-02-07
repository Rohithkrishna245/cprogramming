#include<stdio.h>
#include<math.h>
void main (){
  int a,b,c,sum=0;
  printf("enter the value of side a:");
  scanf("%d",&a);
  printf("enter the value of side b:");
  scanf("%d",&b);
  printf("enter the value of side c:");
  scanf("%d",&c);

   a=pow(a,2);
   b=pow(b,2);
   c=pow(c,2);
   sum=a+b;
   if(sum==c){
       printf("the triangle is a right angle triangle");
   }
   else{
       printf("the triangle is not a right angle triangle");
   }

 }
