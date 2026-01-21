#include<stdio.h>
int main()
{
  int A[10][10],B[10][10],C[10][10],n,i,j;
  scanf("%d",&n);
  for (i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&A[i][j]);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&B[i][j]);
  for (i=0;i<n;i++)
    for(j=0;j<n;j++)
      C[i][j]=A[i][j]+B[i][j];
  for (i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      printf("%d ",C[i][j]);
    printf("\n");
  }
  return 0;
}
