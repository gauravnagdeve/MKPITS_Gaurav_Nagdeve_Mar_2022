#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,n; 
	for (r=1;r<=4;r++)
	{
		for (c=1;c<=r;c++)
		{
			if(c%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
			
		}
		printf("\n");
	}
}

