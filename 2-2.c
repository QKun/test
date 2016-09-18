#include "stdio.h"
bin_search(int A[],int n,int key)
{
	int low,high,mid;
	low = 0;
	high = n-1;
	while(low<=high)
	{
		mid = (low + high)/2;
		if(A[mid] == key) return mid;
		if(A[mid]<key)
		{
			low = mid + 1;
		}
		if(A[mid]>key)
		{
			high = mid - 1;
		}
	}
	return -1;
}
main()
{
	int A[10] = {2,3,5,7,8,10,12,15,19,21},i,n,addr;
	printf("The contents of the Array A[10] are\n");
	for(i=0;i<10;i++)
		printf("%d ",A[i]);
	printf("\nPlease input a interger for search\n");
	scanf("%d",&n);
	addr = bin_search(A,10,n);
	if(-1 != addr)
		printf("%d is at the %dth unit is array A\n",n,addr);
	else printf("There is no %d in array A\n",n);
	getche();
}