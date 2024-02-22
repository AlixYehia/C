#include <stdio.h>
void main(void)
{
	int y,i;
	printf("enter the number to dipslay its multiplication table till itself\n");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		printf("%d x %d = %d\n",y,i,y*i);
	
	}
}