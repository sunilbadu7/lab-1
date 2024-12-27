#include<stdio.h>
#define pi 3.14
int main()
{
	long double major, minor, area;
	printf("Enter major and minor axis: ");
	scanf("%ld%ld",&major,&minor);
	area=pi*major,minor;
	printf("\narea of ellipse is: %ld",area);
	return 0;
}
