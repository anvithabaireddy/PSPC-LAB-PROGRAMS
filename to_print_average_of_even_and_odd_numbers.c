#include<stdio.h>
int main()
{
	int i,n,e_sum=0,o_sum=0,e_count=0,o_count=0,a[100];
	float o_avg,e_avg;
	printf("enter number of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	   	if(a[i]%2==0)
	   	  {
	   	  	e_sum=e_sum+a[i];
	   	  	e_count++;
	   	  }
	}   	      	
	e_avg=(float)e_sum/e_count; 
	for(i=0;i<n;i++) 
	{
		if(a[i]%2!=0)
	    {
	    	o_sum=o_sum+a[i];
			o_count++;
	    }
    }
    o_avg=(float)o_sum/o_count;
    printf("even avg=%f\t odd avg=%f\n",e_avg,o_avg);
    return 0;
}
