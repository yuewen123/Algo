#include <stdio.h>
#include <time.h>
clock_t time_start,stop;
int main()
{
	time_start = clock();
	printf("Hello World!");
	stop = clock();
	printf("\n %f \n",(double)(time_start-stop));
	return 0;
	
}
