#include<stdio.h>
int main()
{
	int salary,bonus,total_salary;
	printf("Enter salary,bonus values\n");
	scanf("%d%d",&salary,&bonus);
	total_salary=salary+bonus;
	printf("total_salary=%d",total_salary);
	return 0;
}
