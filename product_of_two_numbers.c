#include<stdio.h>
int main()
{
	float n1, n2, product;
	printf(" Enter two numbers: ");
	scanf("%f%f", &n1,&n2);
	product=n1*n2;
	printf("\nproduct: %.2f",product);
	return 0;
}
