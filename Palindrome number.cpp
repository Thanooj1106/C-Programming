#include<stdio.h>
int main()
{
	int n,m,rev,r;
	printf("Enter number:");
	scanf("%d",&n);
	m=n;
	rev=0;
	while(n>0)
	{
		r =n%10;
		rev = rev*10+r;
		n=n/10;
	}
	if(rev==m)
	printf("Palindrome");
	else
	printf("Not palindrome");
	return 0;
}
