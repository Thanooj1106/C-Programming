#include<stdio.h>
int main()
{
	int A[20],n,i,sum =0;
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for (i=0; i<n;i++)
	scanf("%d",&A[i]);
	for (i=0;i<n;i++)
	{
		sum = sum + A[i];
	}
	printf("The sum = %d",sum);
	return 0;
}
