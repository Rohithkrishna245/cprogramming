#include<stdio.h>
void main (){
  int a[10][10], b[10][10], d[10][10],r,c,row,column;
  printf("enter the value of matrix row");
  scanf("%d",&row);
  printf("enter the value of matrix column");
  scanf("%d",&column);
  for(r=0;r<row;r++){
    for(c=0;c<column;c++){
      printf("\nenter the value of a");
      scanf("%d",&a[r][c]);
    }

  }
   printf("enter the value of ");
  for(r=0;r<row;r++){
    for(c=0;c<column;c++){
      printf("\nenter the value of b");
      scanf("%d",&b[r][c]);
    }

  }
  for(r=0;r<row;r++){
    for(c=0;c<column;c++){
    d[r][c]=a[r][c]-b[r][c];    
    printf("%d ", d[r][c]);
    }
    printf("\n");
  }


}
