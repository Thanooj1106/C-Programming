#include<stdio.h>
int main()
{
  int n1,n2,n3,sum;
  float avg;
  printf("Enter n1,n2,n3:");
  scanf("%d%d%d",&n1,&n2,&n3);
  sum = n1+n2+n3;
  avg = sum/3;
  printf("sum=%d\navg=%f",sum,avg);
  return 0;
}

