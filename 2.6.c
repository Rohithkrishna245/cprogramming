#include <stdio.h>
main()
{
	int a=2,b=2,c,d,e;
	int i[2][2],j[2][2],k[2][2];
	printf("Enter The Fist matrix Elements:");
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		{
			scanf("%d",&i[c][d]);
		}
	}
	printf("Enter The Second Matrix Elements:");
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		{
			scanf("%d",&j[c][d]);
		}
	}
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		{
			k[c][d]=0;
			for(e=0;e<2;e++)
			{
				k[c][d]+=i[c][e]*j[e][d];
			}

		}
	}
	for(c=0;c<a;c++)
	{
		for(d=0;d<b;d++)
		{
			printf("%d\t",k[c][d]);
		}
		printf("\n");
	}
}
