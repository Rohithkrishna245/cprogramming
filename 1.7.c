#include <stdio.h>
 
void main()
{
 int i,last,first;
 printf("Enter The first Number : ");
 scanf("%d",&first);


 printf("Enter The Last Number : ");
 scanf("%d",&last);




 printf("\nEven Number List :\n ");
 
 i=2;
 while(i <= last)
 {
  printf(" %d",i);
  i = i + 2;
 }


 printf("\nOdd Number List :\n ");

 i=1;
 while(i <= last)
 {
  printf(" %d",i);
  i = i + 2;
 }
}
