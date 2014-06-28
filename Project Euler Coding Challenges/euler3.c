#include <stdio.h>


long currentBound;	
long biggestPrimeFactor;
int main()
{
	
	long inputNumber;

	printf("THIS IS A PROGRAM THAT FINDS THE LARGEST PRIME FACTOR\n");
	printf("ENTER INTEGER NUMBER HERE: ");
	scanf("%ld", &inputNumber); //note to self: scanf has a hidden \n
	//printf("YOU ENTERED: %d\n", inputNumber);
	
	long i = 1;

	biggestPrimeFactor = 0;

	currentBound = inputNumber;
	//iterate from 0<inputNumber, going through all the possibilities
	for(i = 1; i <= currentBound; )
	{
		//printf("CURRENT BOUND: %ld\n", currentBound);
		//printf("CURRENT ITERATION: %ld\n", i);
		//if the remainder is 0, then the number evenly divides the inputNumber
		if( (inputNumber%i) == 0)
		{
			printf("FOUND A FACTOR: %ld\n", i);
		
			if(i>biggestPrimeFactor)
			{	
				//save the current biggest prime factor
				biggestPrimeFactor = i;
			}

			//set new bound
			currentBound = currentBound/i;

			//printf("NEW BOUND: %ld\n", currentBound);
		}

		++i;
	}
	
	printf("THE BIGGEST PRIME FACTOR IS: %ld\n", biggestPrimeFactor);


	return 0;
} 
