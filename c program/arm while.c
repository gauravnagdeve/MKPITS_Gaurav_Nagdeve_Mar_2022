#include<stdio.h>
#include<conio.h>
void main()
{
	int i=001;
	int a,b,c,t,res;
	
	printf("all armstrong no. betn 1to 1000:\n");
	
	while (i<=1000)
	{
		t=1;
		
		a=t%10;
		t=t/10;
		b=t%10;
		t=t/10;
		c=t%10;
		
		res=(a*a*a)+(b*b*b)+(c*c*c);
		
		if(i==res)
		{
			printf("%d\n",res);
		}
		i++;
	}
	
}
