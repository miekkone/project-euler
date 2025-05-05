#include<stdio.h>

int main(int argc, char *argv[])
{
	int sum1=0;
	int tempsum2=0;
	int sum2=0;
	int res=0;

	for(int i=1; i<101; i++)
	{
		sum1+=i*i;
	}

	for(int j=1; j<101; j++)
	{
		tempsum2+=j;
	}
	sum2=tempsum2*tempsum2;
	
	printf("%d\n", sum1);
	printf("%d\n", sum2);
	res=sum2-sum1;

	printf("difference between %d and %d is %d\n", sum1, sum2, res);

	return 0;
}
