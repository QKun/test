#include <time.h>
#include <stdio.h>
#include <dos.h>

int main()
{
	clock_t start, end;

	start = clock();

	sleep(1);

	end = clock();
	printf("The time was: %f\n", (end - start) / CLK_TCK);
	return 0;
}