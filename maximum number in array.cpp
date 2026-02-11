#include<stdio.h>
int main()
{
	int A[20],i,n,max=0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter Array elements");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	max=A[0];
	for(i=0;i<n;i++)
	{
		if(max<A[i])
		{
			max=A[i];
		}
	}
	printf("max =%d",max);
	return 0;
}
