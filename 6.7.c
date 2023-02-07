#include<stdio.h>
#include<limits.h>
void main(){
int i,size,first,second;
printf("please enter the number of element you want:");
scanf("%d",&size);
int arr[size];
printf("enter elements :"); 
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
first=second=INT_MIN;
for(i=0;i<size;i++){
if(arr[i]>first){
second=first;
first=arr[i];
}
else if (arr[i]>second&&arr[i]<first){
second=arr[i];
}
}
printf("the second largest element is %d",second);
}
