#include<stdio.h>
void main (){
    int n,first,last,t;
    printf("enter values :");
    scanf("%d",&n);

    for(first=n;first>=10;first){
    first=first/10;
      }    
     printf("first digit is :%d \n",first);

    last=n%10;
     printf("last digit is :%d \n",last);

    printf("the first and last digit of this numbers is: %d \tand  %d \n",first,last);
}
