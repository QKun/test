#include "stdio.h"
main()
{
	float m = 1.0;
	float n = 1.0;
	float s = 0.0;
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=0;j<i;j++)
			m = m * 0.5;
		for(j=1;j<=i;j++)
			n = n * j;
		s = s + m * n;
		m = 1.0;
		n = 1.0;
	}
	printf("Sn = %f\n",s);
	getche();
}