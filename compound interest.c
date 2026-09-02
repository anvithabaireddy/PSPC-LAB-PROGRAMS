#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t,n,A,CI;
	printf("Enter principal amount,rate of interest,time and number of times compound interest per year\n");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	A=p*pow(1+r/(100*n),n*t);
	CI=A-p;
	printf("compound interest=%f",CI);
	return 0;
}
