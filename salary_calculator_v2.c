#include<stdio.h>
void main(void)
{
	int x,z,y;
	printf("enter number of working hours: ");
	scanf("%d",&x);
	z=x*50;
	if(x<40)
	{
		z=z*0.9;

	}
	printf("your salary is: %d",z);
}