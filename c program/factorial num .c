#include<stdio.h>
#include<stdio.h>

void main()
{

int i,num,fact=1;
printf("Enter number:");
scanf("%d",&num);
i=num;
while(i>=1)

{
	fact=fact*i;
	
	i--;
}
printf("%d",fact);
}
