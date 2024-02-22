#include<stdio.h>
void main(void)
{
	int arr[10];
	
	for(int i=0; i<10; i++)
	{
		printf("enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("the values in reverse order\n");
	for(int i=9; i>=0; i--)
	{
		
		printf("%d\n",arr[i]);
	}
}