#include<stdio.h>
int factorial(int a)
{
	int ans=1,i;
	for(i=2;i<=a;i++)
		ans=ans*i;
	
	return ans;
}
