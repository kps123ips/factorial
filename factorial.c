#include<stdio.h>
int main()
{
	int n,i,fact=1;
	printf("Enter a Number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact*=i;
	}
	printf("Factorial of a Number %d",fact);
	getch();
}
