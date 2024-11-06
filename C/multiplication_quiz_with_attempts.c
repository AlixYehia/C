#include <stdio.h>
void main(void)
{
	int x=3*4,y,block=3;
	printf("enter the answer of 3 x 4\n");
	scanf("%d",&y);
	while( (x!=y) && (block>0) )
	{
		printf("Not correct, please try again\n");
		printf("%d times remaning\n",block);
		scanf("%d",&y);
		block--;
	}
	if( (x==y) && (block!=0) )
	printf("correct");
	else
	printf("access denied");
}