#include<stdio.h>
int main()
{
	int i,j,n,A[20][20],sum=0;
	printf("Enter size of matrix:");
	scanf("%d",&n);
	printf("Enter Matrix elements:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		sum=sum+A[i][j];
		printf("Sum of matrix=%d",sum);
		return 0;
}
