#include<stdio.h>
void main(void)
{
	int x,z,y;
	printf("enter number of working hours: ");
	scanf("%d",&x);
	if(x>=40)
	printf("your salary is: %d",x*50);
	else
	{
	
	y=x*50-(x*50*0.1);
	printf("your salary is: %d",y);
	
	}
	

}