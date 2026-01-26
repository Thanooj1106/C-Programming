#include<stdio.h>
int main()
{
	int i,j,n,A[20][20],B[20][20],C[20][20];
	printf("Enter size of matrix:");
	scanf("%d",&n);
	printf("Enter A elements:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	printf("Enter B elements:\n");
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	scanf("%d",&B[i][j]);
	for (i=0;i<n;i++)
	for (j=0;j<n;j++)
	C[i][j]=A[i][j]+B[i][j];
	for (i=0;i<n;i++)
	{
	for (j=0;j<n;j++)
	printf("%d\t",C[i][j]);
	printf("\n");
    }
    return 0;
}
