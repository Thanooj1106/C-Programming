#include<stdio.h>
int main()
{
	int n,m,s=0,a;
	printf("Enter n:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		a=n%10;
		s=s+a*a*a;
		n=n/10;
	}
	if(m==s)
	printf("Armstrong number");
	else 
	printf("Not armstrong number");
}
