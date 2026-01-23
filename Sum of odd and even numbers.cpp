#include<stdio.h>
int main()
{
  int n,i,evensum=0,oddsum=0;
  printf("Enter the number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    if (i%2==0)
    {
      evensum =evensum +i;
    }
  else
  {
    oddsum = oddsum +i;
  }
  printf("Evensum=%d\n",evensum);
  printf("Oddsum=%d\n",oddsum);
  return 0;
}
