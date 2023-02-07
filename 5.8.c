#include<stdio.h>
void main(){
int arr[100],i, a, b;
printf("enter the size of the array:");
scanf("%d",&a);
printf("element are:\n");
for(i=0;i<a;i++){
scanf("%d",&arr[i]);
}
printf("\nenter the element to be searched:");
scanf("%d",&b);
for(i=0;i<a;i++){
if(arr[i]==b){
printf("\nthe element is %d\n",arr[i]);
printf("\npresent at the index %d ",i);
}
}
}
