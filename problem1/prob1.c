#include<stdio.h>

int main(int argc, char *argv[])
{	
	int sum=0;

	for(int i=0; i<1000; i++)
	{
//		printf("%d\n", i);
		if(i%3==0 || i%5==0)
		{
			sum+=i;
//			printf("%d: %d\n", i, sum);
		}
	}
	printf("%d\n", sum);
}
