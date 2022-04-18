#include<stdio.h>
#include<conio.h>
void main()

{
	int choice,add,sub,mult,div;
	printf("enter your choice:\n");
	scanf("%d,&choice");
	printf("press 1for addi\n");
	printf("press 2for sub\n");
	printf("press 3for mult\n");
	printf("press 4for div\n");
	
	
	if (choice==1)
	{
		printf("add=%d",add);
	}
	else
	if(choice==2)
	
	{
		printf("sub =%d",sub);
	}
	else
	if (choice==3)
	{
		printf("mult=%d",mult);
	}
	else
	if(choice==4)
	{
		printf("div =%d",div);
	}
	else
	{
		printf("invalid choice");
 }
}

