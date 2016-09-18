#include <stdio.h>

typedef int keytype;
void adjust(keytype k[],int i,int n)
{
	int j;
	keytype tmp;
	tmp = k[i];
	j = 2 * i;
	while(j<=n)
	{
		if(j<n && k[j]>k[j+1])
		{
			j++;
		}
		if(tmp<=k[j])
		{
			break;
		}
		k[j/2] = k[j];
		j = 2 * j;
	}
	k[j/2] = tmp;
}

void heapsort(keytype k[],int n)
{
	int i;
	keytype tmp;
	for(i=n/2;i>=1;i--)
	{
		adjust(k,i,n);
	}
	for(i=n-1;i>=1;i--)
	{
		tmp = k[i+1];
		k[i+1] = k[1];
		k[1] = tmp;
		adjust(k,1,i);
	}
}

main()
{
	int i,k[11]= {-111,5,2,12,6,9,0,3,6,15,20};
		printf("The orginal data array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",k[i]);	
	heapsort(k,10);
	printf("\nThe result of quick sorting for the array is\n");
	for(i=1;i<=10;i++)
		printf("%d ",k[i]);
}