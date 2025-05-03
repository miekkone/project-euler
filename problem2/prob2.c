#include<stdio.h>

int main(int argc, char *argv[])
{
	int foo = 1;
	int bar = 2;
	int res = foo+bar;
	int sum = bar;

	while(res < 4000000)
	{
		foo = bar;
		bar = res;
		res = foo+bar;
		if(res < 4000000 && res%2 == 0)
		{
			sum+=res;
		}
	}
	printf("%d\n", sum);
}
