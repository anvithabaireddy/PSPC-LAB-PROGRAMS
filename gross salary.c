#include<stdio.h>
int main()
{
	float basic_salary,gross;
	printf("Enter basic salary of employee\n");
	scanf("%f",&basic_salary);
	gross=basic_salary+0.1*basic_salary+0.25*basic_salary;
	printf("gross salary includind DA and TA=%f",gross);
	return 0;
}
