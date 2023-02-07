#include<stdio.h>
void main(){
    int i,j,t,n,a[100];
    printf("enter the size:");
    scanf("%d",&n);
    printf("enter the element");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (a[j]<a[i]){
                t=a[i];
                a[i]=a[j];
                a[j]=t    ;            
            }    
        }
    }
    printf("sorted array \n");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}
