#include<stdio.h>
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  if (n>0)
    printf("Positive number");
  else if (n<0)
    printf("negative number");
  else
    printf("zero");
  return 0;
}
