#include<stdio.h>  
 int main()    
{    
int n,sum=0,m;    
printf("Enter N value:");    
scanf("%d",&n); 
printf("Enter N digit number:");
scanf("%d",&n);   
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}    
printf("Sum is=%d",sum);    
return 0;  
}
