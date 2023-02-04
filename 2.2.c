#include <stdio.h>
main()
{
	int a,b,c,d;
	printf("Enter The Age To Check The voing Eligibility:");
	scanf("%d",&a);
	if(a<18)
	{
		printf("You Are Not Eligible For Voting");
		printf("wait for %d years",18-a);
	}
	else
	{
		printf("You Are Eligble For Voting!!");
	}
}
