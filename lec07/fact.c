#include <stdio.h>

int fibo(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else
		return fibo(x-1)+fibo(x-2);
}
	int power(int x, int n)
	{
   int result = 1;
	  for(int i = 0; i < n; i++) 
	    result *= x;
   return result;
	}

	int fact(int n)
	{
	  int result = 1;
   for(int i = 2; i<=n; i++)
     result *= i;
   return result;
	}

int main()
{
	for(int i = 1; i < 20; i++)
//		printf("%d\n", fact(i));
		printf("%d\n", fibo(i));
//		printf("%d\n", power(2,i));

	return 0;
}

