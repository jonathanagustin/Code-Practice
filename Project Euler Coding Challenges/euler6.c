#include <stdio.h>

int main()
{
	int sumOfSquares = 0;
	int squareOfSum = 0;
	int difference = 1;

	int i;
	for( i=1; i<=100; ++i)
	{
		sumOfSquares = sumOfSquares + (i*i);
	}

	int j;
	for( j=1; j<=100; ++j)
	{
		squareOfSum += j;
	}
	squareOfSum *= squareOfSum;

	difference = squareOfSum - sumOfSquares;

	printf("%d\n", difference);


	return 0;
}
