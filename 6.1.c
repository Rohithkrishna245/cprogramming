#include<stdio.h>
void main (){
 int arr[10],n,i;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf( "enter elements:\n",n);
   for(i=0;i<n;++i){
  scanf("%d",&arr[i]);
      }

   for(i=n-1;i>=0;--i){
  printf("%d",arr[i]);
  }

  }
