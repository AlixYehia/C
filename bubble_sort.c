#include<stdio.h>
void main(void)
{
	int arr[5]={2,3,23,1,203};
	int temp;
	int flag=0; // to check and make looping and execution time less
	for(int i=0; i<5; i++) // -1 because we dont have element 10 since 9+1= 10
	{
		flag==0;  // made it 0 again so maybe it get sorted after 2 times or in mid way
		
		for(int j=0; j<5-1-i; j++) //we minus 1 because we dont compare above the array size and we minus i since last number is already sorted from last itertation so i dont need to loop on it and check it again
		{
			if(arr[j]>arr[j+1]) // if firsr num greater swap to get largest in last
			{
				flag=1;   // if it entered the if then flag =1 that means that array is not sorted yet but if didnt enter after looping the whole small for loop that means all elements in their position so dont loop the big for loop and just exist the code
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				
			}
		
		}
		
		if(flag==0) 
		{
			break;       // break the whole loops when small for is done on all elements since all will be sorted
		}
		
	}
	
	for(int i=0; i<5; i++)
	{
		printf("%d\n",arr[i]);
	}
}