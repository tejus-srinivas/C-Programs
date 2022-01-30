#include<stdio.h>
int main()
{
	int month,rem_days,day;
	printf("enter the number of days = ");
	scanf("%d",&day);
	month = day / 30;
	rem_days = day % 30 ;
	printf("month = %d \n days = %d",month,rem_days);
	return 0 ;
}

