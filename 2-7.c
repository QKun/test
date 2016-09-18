#include "stdio.h"

void swap(int *a,int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void quicksort(int k[], int s, int t)
{
	int i,j;
	if(s<t)
	{
		i = s;
		j = t+1;
		while(1)
		{
			do i++;
			while(!(k[s]>=k[i] || i==t));
			do j--;
			while(!(k[s]<=k[j] || j==s));
			if(i<j)
				swap(&k[i],&k[j]);
			else
				break;
		}
		swap(&k[s],&k[j]);
		quicksort(k,s,j-1);
		quicksort(k,j+1,t);
	}
}

main()
{
	int k[10] = {2,5,6,3,7,8,0,9,12,1} , i;
	printf("The orginal data array is \n");
	for(i=0;i<10;i++)
		printf("%d ",k[i]);
	quicksort(k,0,9);
	printf("\nThe result of quick sorting for the array is\n");
	for(i=0;i<10;i++)
		printf("%d ",k[i]);
	getche();
}