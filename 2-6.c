#include "stdio.h"
void shellsort(int k[],int n)
{
	int i, j, flag, gap = n;
	int tmp;
	while(gap > 1)
	{
		gap = gap/2;
		do
		{
			flag = 0;
			for(i=1;i<=n-gap;i++)
			{
				j = i + gap;
				if(k[i]<k[j])
				{
					tmp = k[i];
					k[i] = k[j];
					k[j] = tmp;
					flag = 1;
				}
			}
		}while(flag != 0);
	}
}

main()
{
	int i,a[11] = {-111,2,5,6,3,7,8,0,9,12,1};

	printf("The orginal data array is\n");
	for(i=1;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
	shellsort(a,10);
	printf("\nThe result of Shell's sorting for the array is\n");
	for(i=1;i<=10;i++)
	{
		printf("%d ",a[i]);
	}
	getche();
}
