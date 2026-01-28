#include<stdio.h>
int main()
{
	int n,i,flag=1;
	printf("Enter number:");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	printf("Not a prime number");
	else
	printf("Prime number");
	return 0;
}
