#include<stdio.h>

void Arith(int x , int y , int * Add_ptr , int * Sub_ptr);


void main (void)

{
	int x,y;
	int add;
	int sub;
	
	printf("enter value 1: ");
	scanf("%d",&x); 
	printf("enter value 2: ");
	scanf("%d",&y);
	
	
	Arith(x , y , &add, &sub);
	
	printf("the result of summation is %d\n",add);
	printf("the result of subtraction is %d",sub);
	
}

void Arith(int x , int y , int * Add_ptr , int * Sub_ptr)
{
	*Add_ptr = x + y;
	*Sub_ptr = x - y;

}

