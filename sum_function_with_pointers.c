#include<stdio.h>

int sum(int *x, int *y);

void main (void)

{
	int x,y,z;
	
	printf("enter value 1: ");
	scanf("%d",&x);
	printf("enter value 2: ");
	scanf("%d",&y);
	
	//z= sum(&x,&y);
	printf("the result is: %d",sum(&x,&y));
	
}

int sum(int *x, int *y)
{
	return *x + *y;

}