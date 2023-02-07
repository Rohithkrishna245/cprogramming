#include<stdio.h>
void main(){
int i;
int arr[5]={10,52,78,96,63};
int arr2[5];
printf("original array is\n");
for(i=0;i<5;i++){
  printf("%d ",arr[i]);
}
for(i=0;i<5;i++){
  arr2[i]=arr[i];
}
printf("\ncopied array is\n");
for(i=0;i<5;i++){
printf("%d ",arr2[i]);    
}
}
