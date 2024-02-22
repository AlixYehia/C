#include<stdio.h>
int x=10,y=20;
void swap(void); // if was int swap(void) then when call
                 // dont name the type just type name swap();
void main(void)
{
	printf("x before swap = %d\ny before swap = %d\n",x,y);
	swap();
	
}

void swap(void)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("x after swap = %d\ny after swap = %d",x,y);

}