#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,i,s,c;
	printf("Enter the number");
	scanf("%d",&n1);
	i=1;
	do
	{
		s=i*i;
		c=i*i*i;
	printf("The number i.e %d it's Square is %d and it's Cube is %d .\n",i,s,c);
     i++;
    }while(i<=n1);
}   
