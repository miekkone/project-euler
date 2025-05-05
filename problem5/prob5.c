#include<stdio.h>

int main(int argc, char *argv[])
{
	int res=1;
	int foo=0;
	while(1)
	{
		foo=0;
		for(int i=1; i<21; i++)
		{
			foo+=res%i;
		}
		if(foo==0)
		{
			printf("%d\n", res);
			break;
		}
		res++;
	}
}
