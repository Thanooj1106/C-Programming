#include<stdio.h>
int armstrong(int n)
{
	int r,s=0;
	while (n>0)
	{
		r =n%10;
		s=s+r*r*r;
		n=n/10;
	}
	return s;
}
int main()
{
	int m,n;
	printf("Enter n:");
	scanf("%d",&n);
	m=n;
	if(m==armstrong(n))
	printf("armstrong");
	else 
	printf("Not armstrong");
	return 0;
}
