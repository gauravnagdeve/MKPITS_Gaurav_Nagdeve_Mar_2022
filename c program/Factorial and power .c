#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,f=1;
	printf("Enter the number ");
	scanf("%d",&num);
	i=1;
	while(i<=num)
	{
		f=f*i;
		i++;

	}
	printf("The Factorial of the number is %d",f);
} 
 18  
C programs/Index and Base.c
@@ -0,0 +1,18 @@
#include<stdio.h>
#include<conio.h>
int main()
{ 
   int a,b,i,pow=1;
	printf("Enter the value of base");
	scanf("%d",&a);
	printf("Enter the value of index");
	scanf("%d",&b);
	i=1;
	while(i<=b)
	{
		pow=pow*a;
		i++;
	}
	printf("The power is %d",pow);

} 
