#include<stdio.h>
void main(void)
{
	int a,b;
	float z,v,n;
	
	printf("Please enter first number: ");
	scanf("%d",&a);
	printf("Please enter second number: ");
	scanf("%d",&b);
	z=a+b;
	printf("a + b= %f\n",z);
	v=a*b;
	printf("a x b= %f\n",v);
	
	n=a%b;
	
	printf("a %% b = %f",n );
}