#include<stdio.h>
int main()
{
  int a,b,c;
  printf(" a,b:");
  scanf("%d%d",&a,&b);
  c = a;
  a = b;
  b = c;
  printf("a=%d\n b=%d",a,b);
  return 0;
}
