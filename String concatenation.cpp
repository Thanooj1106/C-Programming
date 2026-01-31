#include<stdio.h>
#include<string.h>
int main()
{
  int n,i,j,m;
  char st1[20],st2[20],st3[20];
  scanf("%s",st1);
  scanf("%s",st2);
  n=strlen(st1);
  m=strlen(st2);
  for(i=0;i<n+m;i++)
  {
    if(i<n)
      st3[i]=st1[i];
    else
      st3[i]=st2[i-n];
  }
  st3[n+m]='\0';
  printf("%s",st3);
  return 0;
}
