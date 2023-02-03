#include <stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter the Number of Total Users:");
	scanf("%d",&a);
	printf("Enter the Number of Staff Users:");
	scanf("%d",&b);
	printf("Student Users:%d",a-b-(b/3));
}
