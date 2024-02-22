#include<stdio.h>
int Get_Max(int x, int y);

void main(void)
{
	int x,y;
	printf("enter value 1: ");
	scanf("%d",&x);
	printf("enter value 2: ");
	scanf("%d",&y);
	int z=Get_Max(x,y);
	
	printf("max value is %d",z);
	

}

int Get_Max (int x, int y)
{
	int z;
	x>y?(z=x):(z=y);
	return z;

}