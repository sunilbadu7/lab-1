#include<stdio.h>
int main()
{
	float n1, n2, n3, sum;
	printf("Enter 3 numbers: ");
	scanf("%f%f%f", &n1,&n2,&n3);
	sum=n1+n2+n3;
	printf("\nThe sum is %.2f", sum);
	return 0;
}
