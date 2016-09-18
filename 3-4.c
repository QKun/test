#include "stdio.h"
int bin_search(int key[],int low,int high,int k)
{
	int mid;
	if(low>high)
		return -1;
	else
	{
		mid = (low+high) / 2;
		if(key[mid] == k)
			return mid;
		if(k>key[mid])
			return bin_search(key,mid+1,high,k);
		else
			return bin_search(key,low,high-1,k);
	}
}

main()
{
	int n,i,addr;
	int A[10] = {2,3,5,7,8,10,12,15,19,21};
	printf("The contents of the Array A[10] are\n");
	for(i=0;i<10;i++)
		printf("%d ",A[i]);
	printf("\nPlease input a interger for search\n");
	scanf("%d",&n);
	addr = bin_search(A,0,9,n);
	if(-1 != addr)
		printf("%d is at the %dth unit is array A\n",n,addr);
	else
		printf("There is no %d in array A\n",n);
	getche();
}