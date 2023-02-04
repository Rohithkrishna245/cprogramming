#include <stdio.h>
#include <string.h>
main()
{
	char a[100];
	int d,e,f=0;
	printf("Enter The Word To Check The Vowels:");
	scanf("%[^\n]s",&a);
	e=strlen(a);
	for(d=0;d<e;d++)
	{
		if(a[d]=='a'|| a[d]=='e' || a[d]=='i' || a[d]=='o' || a[d]=='u' || a[d]== 'A' || a[d]=='E' || a[d]=='I' || a[d]=='O' || a[d]=='U')
		{
			f=f+1;
		}
	}
	printf("The Number of Vowles In The Given Sentence is:%d",f);

}
