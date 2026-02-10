#include<stdio.h>
int main()
{
	int n,m,s=0,a,f,i;
	printf("Enter n:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		a=n%10;
		f=1;
		for(i=1;i<=a;i++)
		{
			f=f*i;
		}
		s=s+f;
		n=n/10;
	}
	if(m==s)
	printf("Strong number");
	else 
	printf("Not strong number");
	return 0;
}
