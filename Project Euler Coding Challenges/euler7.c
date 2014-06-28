#include <stdio.h>

int isPrime(int);


int main()
{
	int primeCount;
	int biggestPrime;
	int i = 2;

	for (primeCount=1; primeCount<=10001; i++ )
	{
		if(isPrime(i))
		{
			biggestPrime = i;
			++primeCount;
		}
	}
	printf("%d\n", biggestPrime);
	return 0;
}

int isPrime(int number)
{

	int i;
	for(i=2; i*i <= number; i++)
	{
		if (number % i == 0)
		{
			return 0;
		}
	}

	return 1;
}
