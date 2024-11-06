#include<stdio.h>
void main(void)
{
	int arr[10],a,flag=0;
	
	for(int i=0; i<10; i++)
	{
		printf("enter number %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("enter the value to search: ");
	scanf("%d",&a);
	
	for(int i=0; i<10; i++)
	{
		if(arr[i]==a)
		{
			flag++;
		}
		
	}
	if(flag>0)
	printf("the value exists %d times",flag);
	else
	printf("value not exist");
	
	
}