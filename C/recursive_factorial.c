#include<stdio.h>
int factorial(int x);

void main (void)
{
	int x,z;
	printf("enter number to get factorial: ");
	scanf("%d",&x);
	z=x;
	

}

int factorial(int x)
{
	if(x>=1)
	{
		int z=1;
		z*=x;
		x--;
		factorial(z);
	}
	
	else
	return 1;
 
}