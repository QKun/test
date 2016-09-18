#include "stdio.h"
void selectsort(int k[],int n)
{
	int i,j,max;
	for(i=1;i<=n-1;i++)
	{
		max = i;
		for(j=i+1;j<=n;j++)
		if(k[j] > k[max])
			max = j;
			if(max != i)
			{
				k[0] = k[max];
				k[max] = k[i];
				k[i] = k[0];
			}
	}
}

main()
{
	int i,a[11] = {-111,2,5,6,3,7,8,0,9,12,1};

	printf("The original data array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	selectsort(a,10);
	printf("\nThe result of selection sorting for the array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	//getche();
}