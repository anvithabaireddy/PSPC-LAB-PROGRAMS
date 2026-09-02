#include<stdio.h>
int main()
{
	float p,r,t,SI;
	printf("Enter principal amount,rate of interest,time\n");
	scanf("%f%f%f",&p,&r,&t);
	SI=(p*r*t)/100;
	printf("Simple interest=%f",SI);
	return 0;
}
