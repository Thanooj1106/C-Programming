#include<stdio.h>
int main()
{
  int n,i,flag=1;
  printf("Enter the number:");
  scanf("%d",&n);
  for (i =2;i<n; i++)
  {
    if((n%i)==0)
    {
      flag=0;
      break;
    }
  }
  if(!flag)
  {
    printf("not prime");
  }
  else
  {
    printf("Prime");
  }
  return 0;
}
