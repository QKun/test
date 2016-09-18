#include "stdio.h"
insertsort(int a[],int n)
{
	int i,j;
	for(i=2;i<=n;i++)
	{
		a[0] = a[i];
		j = i - 1;
		while(j>0 && a[0]>a[j])
			a[j+1] = a[j--];
		a[j+1] = a[0];
	}
}

main()
{
	int i,a[11] = {-111,2,5,6,3,7,8,0,9,12,1};

	printf("The original data array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	insertsort(a,10);
	printf("\nThe result of insertion sorting for the array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	getche();
}