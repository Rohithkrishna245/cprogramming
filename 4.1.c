#include<stdio.h>
int main(){
 int n,i,sum;
 printf("Perfect numbers are: ");
 for(n=1;n<=100;n++){
 i=1;
 sum = 0;
 while(i<n){
 if(n%i==0)
 sum=sum+i;
 i++; }
 if(sum==n)
 printf("%d ",n);
 }
 return 0;
}
