#include<stdio.h>

int reverse(int n)
{
	int rev=0;
	while (n>0)
	{
		rev = 10*rev + n%10;
		n/=10;
	}
	return rev;
}

int isPalindrome(int n)
{
	return n==reverse(n);
}

int main(int argc, char *argv[])
{
	int largestPalindrome=0;
	int a=999;

	while(a>=100)
	{
		int b=999;
		while(b>=a)
		{
			if(a*b <= largestPalindrome)
			{
				break;
			}
			if(isPalindrome(a*b))
			{
				largestPalindrome=a*b;
			}
			b--;
		}
		a--;
	}
	printf("%d\n", largestPalindrome);
	return 0;
}
