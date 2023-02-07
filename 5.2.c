#include<stdio.h>
 int main (){  
    int n,i,a[100],squ;
    printf("enter the size of an array :");
    scanf("%d",&n);
    printf("enter the elements :\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
    squ=a[i]*a[i];    
    printf("square of the element:%d\n",squ);
    }

 return 0;
}
