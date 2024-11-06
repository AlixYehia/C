#include <stdio.h>
void main(void)
{
	int i,x,sum=0;
	printf("enter the 10 numbers for sum. and avg.\n");
	
	for(i=1;i<=10;i++)
	{
		printf("number %d: ",i);
		scanf("%d",&x);
		sum+=x;
	}
	i-=1; // since it will exist with 11 not 10 due to inc.
	printf("sum of 10 numbers = %d\n",sum);
	printf("average of 10 numbers = %f",(float)sum/i);
	printf("\ni=%d",i);
}