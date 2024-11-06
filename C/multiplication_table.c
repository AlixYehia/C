#include <stdio.h>
void main(void)
{
	int y,i=1;
	printf("enter the number to dipslay its multiplication table till itself\n");
	scanf("%d",&y);
	while(i<=y)
	{
		printf("%d x %d = %d\n",y,i,y*i);
		i++;
	
	}
}