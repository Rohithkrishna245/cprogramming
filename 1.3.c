#include<stdio.h>

int main(){

    int x,fact=1,n;

    printf("Enter the value N: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("Factorial of %d is: %d",n,fact);

    return 0;

}
