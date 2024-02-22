#include<stdio.h>

void main (void)
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int x;
	int start=0;
	int end=10;
	int middle=(start+end)/2;
	int i;
	
	
		printf("enter number to search for: ");
		scanf("%d",&x);
		for(i=0; i<10; i++)
		{
			if( arr[middle] ==x)
			{
				printf("value exist at element %d\n",middle);
				break;
			}
			else if(x>arr[middle])
			{
				start=middle+1;               
				middle=(start+end)/2;         
			}
			else if (x<arr[middle])
			{
				end=middle-1;
				middle=(start+end)/2;
			}
			
			
			if(start>end)
			{
				printf("value doesnt exist\n");
				break;
			}
			printf("%d\n",i);
			printf("start=%d\n",start);
			printf("end=%d\n",end);
			printf("mid=%d\n",middle);
		}
			printf("middle term=%d\n",arr[12]);
			printf("%d\n",i);
			printf("start=%d\n",start);
			printf("end=%d\n",end);
			printf("mid=%d\n",middle);
		
	
	
	

}