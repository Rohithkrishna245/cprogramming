#include<stdio.h>
void main(){
  int a[10];
  int i,even=0,odd=0,n;
    printf("entre the size of an array : ");
    scanf("%d",&n);

     printf(" \nenter %d elements in the array :\n",n);
  for(i=0;i<n;i++){

     scanf("%d",&a[i]);    

   }
  for(i=0;i<n;i++){

    if(a[i]%2==0){
      even++;
    }
    else
     odd++;
  }
  printf(" \ntotal even number : %d \ntotal odd number : %d",even,odd);
}
