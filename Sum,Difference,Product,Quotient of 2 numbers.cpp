#include<stdio.h>
int main()
{
  float a,b;
  printf("Enter a,b:");
  scanf("%f%f",&a,&b);
  printf("\nsum=%.2f\n",a+b);
  printf("Difference=%.2f\n",a-b);
  printf("Product=%.2f\n",a*b);
  printf("Quotient=%.2f",a/b);
  return 0;
}
