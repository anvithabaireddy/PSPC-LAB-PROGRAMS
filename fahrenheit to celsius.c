#include<stdio.h>
int main()
{
	float fahrenheit,celsius;
	printf("Enter fahrenheit temperature\n");
	scanf("%f",&fahrenheit);
	celsius=(fahrenheit-32)*5.0/9.0;
	printf("celsius temperature=%f",celsius);
	return 0;
}
