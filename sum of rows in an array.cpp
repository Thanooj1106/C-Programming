#include<stdio.h>
int main()
{
	int i,j,n,A[20][20],s;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	{
		s=0;
		for (j=0;j<n;j++)
		{
			s=s+A[i][j];
		}
		printf("%d=%d\n",i+1,s);
	}
	return 0;
}
