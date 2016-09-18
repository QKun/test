#include "stdio.h"
deTobi(int a)
{
	int i = 0 , stack[10] , r, s;
	do
	{
		r = a / 2;
		s = a % 2;
		stack[i] = s;
		if(r!=0)
		{
			i++;
			a = r;
		}
	}
	while(r);
	for(;i>=0;i--)
		printf("%d",stack[i]);
	printf("\n");
}

main()
{
	int a;
	printf("Please input a Decimal digit less than 1023\n");
	scanf("%d",&a);
	deTobi(a);
	getche();
}