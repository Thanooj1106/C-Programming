#include<stdio.h>
int main()
{
  int n1,n2;
  printf("Enter two numbers:");
  scanf("%d%d",&n1,&n2);
  if (n1>n2)
    printf("n1 is largest");
  else if (n2>n1)
    printf("n2 is largest");
  else
    printf("both are same");
  return 0;
}
