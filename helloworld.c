#include<stdio.h>
int main()
{
	char a[50];
//	fgets(a,sizeof(a), stdin);
	scanf("%[^\n]s", a);
	printf(" The entered string is %s", a);
	return 0;
}
