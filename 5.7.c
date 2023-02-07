#include<stdio.h>
void main (){
  int n,j,i,m,sub=0,sum=0,r;
  int a[100];
  printf("enter size");
  scanf("%d",&r);
  printf("enter element\n");
  for(i=0;i<r;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<r;i++){
    if (i==0||i%2==0){
      n=a[i];
      sum=0;
  for(j=0;n>0;j++){
    m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("%d\n",sum);}

  else{
    n=n/10;
  for(j=0;n>0;j++){
    m=n%10;
        sub=sub-m;
        n=n/10;
    }
    printf("%d\n",sub);}

   }
 }
