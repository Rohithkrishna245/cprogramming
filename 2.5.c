#include <stdio.h>
float interest(int p,int t)
{
	char x;
	printf("Are u a senior citize(y/n)");
	scanf("%s",&x);
	if(x=='y')
	{
		return (p*t*10)/100;
	}
	else
	{
		return (p*t*12)/100;
	}
}
main()
{
	int p,t;
	printf("Enter The Principal Amount:");
	scanf("%d",&p);
	printf("Enter The Time Period:");
	scanf("%d",&t);
	printf("The Interest Amount is %f",interest(p,t));
}
