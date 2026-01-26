#include<stdio.h>
int main()
{
	int i,j,n,A[20][20];
	printf("Enter matrix size:");
	scanf("%d",&n);
	printf("Enter matrix elements:\n");
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for (i=0;i<n;i++)
		for(j=0;j<n;j++)
		printf("%d\t",A[i][j]);
		printf("\n");
	return 0;
}
