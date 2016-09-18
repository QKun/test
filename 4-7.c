#include "stdio.h"
#include <stdio.h>
void InputMatrix(int (*a)[4],int ,int);
void OutputMatrix(int (*b)[3],int ,int);
void MatrixTranspose(int (*a)[4],int (*b)[3]);

int main(void)
{
	int a[3][4],b[4][3];
	printf("Please input 3x4 matrix\n");
	InputMatrix(a,3,4);
	MatrixTranspose(a,b);
	printf("The Transposex Matrix is\n");
	OutputMatrix(b,4,3);
	getchar();
	return 0;
}
void InputMatrix(int (*a)[4],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",*(a+i)+j);
}
void OutputMatrix(int (*b)[3],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",*(*(b+i)+j));
		printf("\n");
	}
}
void MatrixTranspose(int (*a)[4],int (*b)[3])
{
	int i,j;
	for(i=0;i<4;i++)
		for(j=0;j<3;j++)
			b[i][j] = a[j][i];
}