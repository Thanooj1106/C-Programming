#include<stdio.h>
int main()
{
	int i,j,n,r_sum,A[20][20],c_sum;
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	{
		r_sum=0;
		for(j=0;j<n;j++)
		r_sum=r_sum+A[i][j];
		printf("%d =%d\n",i+1,r_sum);
	}
	for(j=0;j<n;j++)
	{
		c_sum=0;
		for(i=0;i<n;i++)
		c_sum=c_sum+A[i][j];
		printf("%d=%d\n",j+1,c_sum);
	}
}
