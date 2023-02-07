#include<stdio.h>
void main (){
    int i,a[10],n,r,sum;
    printf("enter numbers:");
    for(i=0;i<1;i++){
        scanf("%d",&a[i]);
       }
    for(i=0;i<1;i++){
        n=a[i];
        sum=0;
    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("reverse of numbers :%d \n",sum);
    if(sum==a[i]){
        printf("it is palidrome number\n");
    }
    else{
        printf("it is not a polidrome number");
         }        
     }
}
