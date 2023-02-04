#include <stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter The first Number(P):");
	scanf("%d",&a);
	printf("Enter The second number(Q):");
	scanf("%d",&b);
	printf("Enter The Digit(R):");
	scanf("%d",&c);
	for(d=a;d<=b;d++)
	{
		if(d%10!=c)
		{
			printf("%d",d);
			if(d<b)
			{
				printf(",");
			}
		}
	}
}
