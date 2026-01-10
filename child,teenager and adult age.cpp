#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age:");
  scanf("%d",&age);
  
  if (age<=10)
    printf("Child");
  else if (age<18)
    printf("Teenager");
  else
    printf("adult");
  return 0;
}
