#include <stdio.h>
main()
{
	int a,b,c,d;
	char s[2];
	printf("Enter the Number Of Rows to print:");
	scanf("%d",&a);
	printf("Enter The Character To Print:");
	scanf("%s",&s);
	for(b=0;b<a;b++)
	{
		for(c=0;c<b+1;c++)
		{
			printf("%s",s);
		}
		printf("\n");
		}
}
