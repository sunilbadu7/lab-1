#include<stdio.h>
int main()
{
	float principal, rate, time, simple_int;
	printf("Enter principal, rate and time: ");
	scanf(" %f%f%f", &principal,&rate,&time);
	simple_int=(principal*rate*time)/100;
	printf("\nSimple interest: %.2f", simple_int);
	return 0;
}
