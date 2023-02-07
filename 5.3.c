#include<stdio.h>
void main(){
    int arr[100],a,i,max,min,diff;
    printf("size of array is:");
    scanf("%d",&a);
    printf("enter the element ");
    for(i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    printf("the array is \n");
    for(i=0;i<a;i++){
    printf("%d ",arr[i]);
    }
    printf("\n");
    min= max=arr[0];
    for(i=0;i<a;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    for(i=0;i<a;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d is smaller then %d\n",min,max);
    diff=max-min;
    printf("the difference between them is %d",diff);
}
