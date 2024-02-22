#include <stdio.h>
void main(void)
{
	int y,factorial=1;
	printf("enter an integer: ");
	scanf("%d",&y);
	if(y==0)
		printf("factorial= 1");
	else if(y<0)
		printf("invalid enter integer number");
	else
	{
		do{
		factorial*=y;
		y--;
		
	}while(y>=1);
	printf("factorial = %d",factorial);
	
	}
	
}