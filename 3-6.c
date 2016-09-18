#include "stdio.h"
int count=0;
int isCorrect(int i,int j,int (*Q)[4])
{
	int s,t;
	for(s=i,t=0;t<4;t++)
	if(Q[s][t] == 1 && t!=j) return 0;

	for(t=j,s=0;s<4;s++)
	if(Q[s][t] == 1 && s!=i) return 0;

	for(s=i-1,t=j-1;s>=0&&t>=0;s--,t--)
	if(Q[s][t] == 1) return 0;

	for(s=i+1,t=j+1;s<4&&t<4;s++,t++)
	if(Q[s][t] == 1) return 0;

	for(s=i-1,t=j+1;s>=0&&t<4;s--,t++)
	if(Q[s][t] == 1) return 0;

	for(s=i+1,t=j-1;s<4&&t>=0;s++,t--)
	if(Q[s][t] == 1) return 0;

	return 1;
}

void Queen(int j,int (*Q)[4])
{
	int i,k;
	if(j==4)
	{
		for(i=0;i<4;i++)
		{
			for(k=0;k<4;k++)
				printf("%d",Q[i][k]);
			printf("\n");
		}
		printf("\n");
		getche();
		count++;
		return;
	}
	for(i=0;i<4;i++)
	{
		if(isCorrect(i,j,Q))
		{
			Q[i][j] = 1;
			Queen(j+1,Q);
			Q[i][j] = 0;
		}
	}
}

main()
{
	int Q[4][4];
	int i,j;
	for(i=0;i<4;i++)
		for(j=0;j<4;j++)
			Q[i][j] = 0;
	Queen(0,Q);
	printf("The number of the answer of FOUR_QUEEN are %d",count);
	getche();
}