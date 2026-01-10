#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("Enter n1,n2,n3:");
  scanf("%d%d%d",&n1,&n2,&n3);
  if (n1>n2 && n1>n3)
    printf("n1 is biggest");
  else if (n2>n1 && n2>n3)
    printf("n2 is biggest");
  else
    printf("n3 is biggest");
  return 0;
}
