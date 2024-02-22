#include<stdio.h>
void main(void)
{
	int x=7, y=4;
	int z,k,m,l,n;
	
	
	z = x & y;
	k = x | y;
	m = x ^ y;
	l= x >> 1;
	n= y >> 2;
	
	
	printf("z=x&y = %d\nk = x | y= %d\nm = x ^ y= %d\nl= x >> 1= %d\nn= y >> 2= %d",z,k,m,l,n);
}