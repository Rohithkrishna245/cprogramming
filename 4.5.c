#include<stdio.h>
void main (){
 int a,b,r;
   printf("enter any two number:\n");
   scanf("%d", &a);
   scanf("%d",&b);
     for(r=1;r<=a*b;r++)
    if(r % a == 0 && r % b == 0)
     break;
    printf("LCM of %d and %d is: %d",a,b,r);    
}
