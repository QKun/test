#include "stdio.h"
int isPrime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0) return 0;	
	}
	return 1;
}

getPrime(int low,int high)
{
	int i;
	for(i=low;i<=high;i++)
	{
		if(isPrime(i))
		{
			printf("%d ",i);
		}
	}
}

main()
{
	int low,high;
	printf("Please input the domain for searching prime\n");
	printf("low limitation:");
	scanf("%d",&low);
	printf("high limitation:");
	scanf("%d",&high);
	printf("The whole primes in this domain are\n");
	getPrime(low,high);
	getche();
}