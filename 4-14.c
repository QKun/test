#include <string.h>
#include <stdio.h>
void PrintTrangle(int n);
int main()
{
	int n;
	printf("How many rows of * for trangle\n");
	scanf("%d",&n);
	PrintTrangle(n);
	getchar();
	return 0;
}
void PrintTrangle(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<n-i;j++)
			printf(" ");
		for(j=0;j<2*i-1;j++)
			printf("*");
		printf("\n");
	}
}