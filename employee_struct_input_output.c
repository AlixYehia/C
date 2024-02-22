#include <stdio.h>

typedef int u16;


void main(void)
{
	struct employee
	{
		u16 salary;
		u16 bonus;
		u16 deduction;
	
	}ahmed={2000,10,200}, amr={1200,0,0};
	
	struct employee ali = {.salary=2000, .bonus=120, .deduction=0};
	
	printf("enter ali salary: ");
	scanf("%d",&ali.salary);
	printf("enter ali bonus: ");
	scanf("%d",&ali.bonus);
	printf("enter ali deduction: ");
	scanf("%d",&ali.deduction);
	
	printf("enter ahmed salary: ");
	scanf("%d",&ahmed.salary);
	printf("enter ahmed bonus: ");
	scanf("%d",&ahmed.bonus);
	printf("enter ahmed deduction: ");
	scanf("%d",&ahmed.deduction);
	
	printf("enter amr salary: ");
	scanf("%d",&amr.salary);
	printf("enter amr bonus: ");
	scanf("%d",&amr.bonus);
	printf("enter amr deduction: ");
	scanf("%d",&amr.deduction);
	
	
	u16 total_value;
	
	total_value= (   -(ali.deduction) ) + ali.salary + ali.bonus + (  -(ahmed.deduction) ) + ahmed.salary + ahmed.bonus + (  -(amr.deduction) ) + amr.salary + amr.bonus;
	printf("total= %d",total_value);
	

}