#include<stdio.h>
int main()
{
	float basic ,hra ,da,gross;
	printf("Enter basic salary:");
	scanf("%f",&basic);
	hra=basic*0.20;
	da=basic*0.40;
	gross = basic +hra+da;
	printf("Salary=%.2f",gross);
	return 0;
}
