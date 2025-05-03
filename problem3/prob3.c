#include<stdio.h>
#include<stdbool.h>


bool isPrime(long int n)
{
	if(n == 0 || n == 1)
		return false;
	
	for(long int i=2; i<n; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}



int main()
{
	long int N=600851475143;
	long int res=0;

	for(long int i=2; i<N/2; i++)
	{
		if(i%2 != 0)
			if(N%i == 0)
				if(isPrime(i))
					res=+i;
					printf("%d\n", res);
	}
	return 0;
}
