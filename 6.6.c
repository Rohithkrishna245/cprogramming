#include<stdio.h>

 void main (){


  int a[10];
  int sum=0,i,n;
  printf("enter the size of a array :");
  scanf("%d",&n);

   printf("enter the elements :\n");
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      }
    for(i=0;i<n;i++){
       sum=sum+a[i];
    }

      printf("\nthe sum of all elements is:%d",sum);
 }
