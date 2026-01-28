#include<stdio.h>
int main()
{
	int n,m,r,sum=0;
	printf("Enter number:");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		sum = sum+r;
		n=n/10;
	}
	if(m%sum==0)
	printf("Harshath number");
	else
	printf("Not Harshath number");
	return 0;
}
