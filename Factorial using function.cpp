#include<stdio.h>
int Fact(int n)
{
	int i,F=1;
	for(i=1;i<=n;i++)
	F=F*i;
	return F;
}
int main()
{
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Factorial =%d",Fact(n));
	return 0;
}
