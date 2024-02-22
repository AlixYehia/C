#include<stdio.h>

void main (void)

{
	int arr[5]={1,2,3,4,5};
	int * ptr = &arr[0];
	int sum=0;
	
	for(int i=0; i<5; i++)
	{
		sum+=*ptr;
		ptr++;
	}
	printf("summation = %d",sum);

}