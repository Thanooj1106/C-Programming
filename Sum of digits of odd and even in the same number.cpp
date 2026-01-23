#include<stdio.h>
int main()
{
	long n;
	int r,e_sum=0,o_sum=0;
	printf("Enter number:");
	scanf("%ld",&n);
	e_sum =0;o_sum=0;
	while(n>0)
	{
	r = n%10;
	if (r%2==0)
	 e_sum=e_sum + r;
	else
	 o_sum=o_sum + r;
	n=n/10;
    }
    printf("e_sum =%d\n",e_sum);
    printf("o_sum=%d",o_sum);
	return 0;
}
