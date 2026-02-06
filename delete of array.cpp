#include<stdio.h>
int main()
{
  int A[20],i,n,pos;
  scanf("%d",&n);
  for (i=0;i<n;i++)
    scanf("%d",&A[i]);
  scanf("%d",&pos);
  for(i=pos;i<=n-1;i++)
  {
    A[i-1]=A[i];
  }
  n =n-1;
    for (i=0;i<n;i++)
      printf("%d",A[i]);
  return 0;
}
