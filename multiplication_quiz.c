#include <stdio.h>
void main(void)
{
	int x=3*4,y;
	printf("enter the answer of 3 x 4\n");
	scanf("%d",&y);
	while(x!=y)
	{
		printf("Not correct, please try again\n");
		scanf("%d",&y);
	}
	printf("correct");
}