#include <stdio.h>
int main()
{
int days,months,days_remaining,years;
printf("Enter Days To Convert:");
scanf("%d",&days);
months=days/30;
days_remaining=days%30;
years=days/365;
printf("Number of Months is: %d And Number of Remaining days is: %d\nNumber of Years is: %d\n",months,days_remaining,years);
}
