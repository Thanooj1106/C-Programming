#include<stdio.h>
#include<string.h>
int main()
{
  char name[] ="Thanooj";
  int n,i=0;
  while(name[i]!='\0')
    i++;
  printf("%d",i);
  return 0;
}
