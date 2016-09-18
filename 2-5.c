#include "stdio.h"
void bubblesort(int k[],int n)
{
	int i,j,tmp ,flag = 1;
	for(i=1;i<=n-1 && flag==1;i++)
	{
		flag = 0;
		for(j=1;j<=n-1;j++)
		{
			if(k[j]<k[j+1])
			{
				tmp = k[j+1];
				k[j+1] = k[j];
				k[j] = tmp;
				flag = 1;
			}
		}
	}
}

main()
{
	int i,a[11] = {-111,2,5,6,3,7,8,0,9,12,1};

	printf("The orginal data array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	bubblesort(a,10);
	printf("\nThe result of bubble sorting for the array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",a[i]);
	getche();
}