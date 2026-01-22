#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);
  if (a>b && a>c)
    printf("a is max\n");
  else if (b>a && b>c)
    printf("b is max\n");
  else 
    printf("c is max\n");
  if (a<b && a<c)
    printf("a is min");
  else if (b<a && b<c)
    printf("b is min");
  else
    printf("c is min");
  return 0;
}
