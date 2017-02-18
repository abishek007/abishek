#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("even\0odd"+((n%2)*5));
	return 0;
}
