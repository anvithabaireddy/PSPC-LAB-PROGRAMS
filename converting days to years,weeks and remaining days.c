#include<stdio.h>
int main()
{
	int days,years,weeks,remaining_days;
	printf("Enter number of days\n");
	scanf("%d",&days);
	years=days/365;
	weeks=days%365/7;
	remaining_days=days%365%7;
	printf("years=%d\n",years);
	printf("weeks=%d\n",weeks);
	printf("remaining days=%d\n",remaining_days);
	return 0;
}
