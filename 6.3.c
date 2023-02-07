#include<stdio.h>
void main(){
  int arr[100], a,sum,i;
  printf("enter the size of array\n");
  scanf("%d",&a);
  printf("enter element\n" );
  for(i=0;i<a;i++){
    scanf("%d",&arr[i]);
  }
  for(i=0;i<a;i++){
    printf("%d \t ",arr[i]);
  }
  i=0;
  printf("\nthe even numbers are\t");
  while(i<a){
    if (arr[i]%2==0){
      printf("%d  ",arr[i]);
      sum=sum+arr[i];
    }
  i++;    
  }
  printf("\nsum is \n%d\n",sum);
}
