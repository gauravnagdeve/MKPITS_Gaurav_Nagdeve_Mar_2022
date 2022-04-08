#include<stdio.h>
#include<conio.h>

void main()

{
	int num1;
	printf("input an integer:\n");
	scanf("%d",&num1);

	if (num1>=0&&num1<=20)
	
	{
		printf ("range [0,20]");
		
	}
	else
	if (num1>=21 &&num1<40)
	{
		printf("range[21,40]");
	}
	else 
	if(num1>=41 &&num1<60)
	{
		printf("range[41,60]");
	}
			else
			 if(num1>=61&&num1<=80)
			
		{
		
		printf("range[61,80]");
	}
			else
			if(num1<=0)
			{
				printf("Number is negative");
			}
			else
	{
			
		printf("outside of range");
	}
			getchar();
			
		
	
	
}
