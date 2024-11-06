#include<stdio.h>
#include<stdlib.h>

typedef unsigned int u32;



void main(void)
{
	u32 num;
	
	printf("enter size of array: ");
	scanf("%d",&num);
	
	u32 * ptr;
	ptr = (u32*) malloc( num * sizeof(u32) ) ;
	
	u32 temp;
	u32 flag; 
	
	for(u32 i=0; i<5; i++)
	{
		printf("enter value %d: ",i+1);
		scanf("%d",&ptr[i]);
		
	}
	
	for(u32 i=0; i<5; i++)
	{
		
		flag=1;
		
		for(u32 j=0; j<4-i; j++)
		{
			
			if( ptr[j]> ptr[j+1] )
			{
				flag=0;
				temp=ptr[j+1];
				ptr[j+1]=ptr[j];
				ptr[j]=temp;
			}
			
			
		}
		
		if( flag==1 )
			break;
		
	}
	
	printf("values after sorting are:\n");
	
	for(u32 i=0; i<5; i++)
	{
		printf("%d\n",ptr[i]);
		
	}
	

}