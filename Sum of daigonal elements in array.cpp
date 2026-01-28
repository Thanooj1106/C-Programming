#include<stdio.h>
int main()
{
	int i,j,n,A[20][20],sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for (i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for (i=0;i<n;i++)
	sum = sum+A[i][i];
	printf("Sum is %d",sum);
	return 0;
}
