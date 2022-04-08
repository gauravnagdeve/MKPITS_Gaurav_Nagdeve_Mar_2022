#include<stdio.h>
#include<conio.h>
int main() 
{ 
int n,i; 
char a[12][10] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"}; 
printf("Enter any integer between 1 to 12 to know its corresponding month: "); 
scanf("%d",&n); 
if(n>=1 && n<=12) 
for(i=1;i<=12;i++) 
{ 
if(n==i) 
printf("\n%d corresponds to %s",i,a[i-1]); 
} 
else 
printf("\nYou have enter wrong integer number"); 
return 0; 
}
