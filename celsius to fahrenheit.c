#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("Enter celsius temperature\n");
	scanf("%f",&celsius);
	fahrenheit=9.0/5.0*celsius+32;
	printf("fahrenheit temperature=%f",fahrenheit);
	return 0;
}
