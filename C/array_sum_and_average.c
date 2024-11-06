#include<stdio.h>
void main(void)
{
	int arr[10],sum=0;
	float avg;
	
	for(int i=0; i<10; i++)
	{
		printf("enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	
	for(int i=9; i>=0; i--)
	{
		
		sum+=arr[i];
	}
	avg=(float)sum/10;
	printf("sum of array elements: %d\n",sum);
	printf("average of array elements: %f",avg);
	
	// if i intialized avg as int and printed it as float or any other type than intialized it will print wrongly without even getting the int value will just print 0 because scanf and printf are stupid functions
	
}