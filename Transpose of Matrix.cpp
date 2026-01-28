#include<stdio.h>
int main()
{
	int i,j,n,m,A[20][20];
	printf("Enter size of matrix:");
	scanf("%d%d",&n,&m);
	printf("Enter Matrix elements:\n");
	for (i=0;i<n;i++)
	for(j=0;j<m;j++)
	scanf("%d",&A[i][j]);
	for (i=0;i<m;i++)
	{
	for (j=0;j<n;j++)
	printf("%d\t",A[j][i]);
	printf("\n");
    }
    return 0;
}
