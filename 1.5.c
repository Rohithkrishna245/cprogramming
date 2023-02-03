#include <stdio.h>
int main()
{
int date,month,year;
printf("Enter the date:");
scanf("%d",&date);

printf("Enter the month:");
scanf("%d",&month);

printf("Enter the year:");
scanf("%d",&year);

if (year%400==0)
printf("Given date is Leap Year");
else if (year%100==0)
printf("Given date is not Leap Year");
else if (year%4==0)
printf("Given date is  a Leap Year");
else
printf("Given date is not a Leap Year");
return 'o';
}
