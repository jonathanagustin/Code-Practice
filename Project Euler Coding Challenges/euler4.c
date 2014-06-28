#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Palindrome(long);


long biggestPalindromeSoFar;

int main()
{
	printf("THIS IS A PROGRAM THIS FINDS THE LARGEST PALINDROME\n");
	printf("MADE FROM THE PRODUCT OF TWO 3-DIGIT NUMBERS\n");	

	//using a brute force method: calculating all numbers 100<999	
	long three_digit1;
	long three_digit2;
	long product = 0;

	for(three_digit1 = 100; three_digit1 <= 999; ++three_digit1)
	{
		for(three_digit2 = 100; three_digit2 <= 999; ++three_digit2)
		{
			//printf("CURRENTLY MULTIPLYING %d AND %d\n",three_digit1, three_digit2);
			product = three_digit1*three_digit2;
			//printf("THE PRODUCT IS: %d\n", product);
			
			if(Palindrome(product))
			{
				if(product > biggestPalindromeSoFar)
				{
					biggestPalindromeSoFar = product;
				}
			}
		}
	
	}

	printf("THE BIGGEST PALINDROME: %ld\n", biggestPalindromeSoFar);	
	return 0;
}

int Palindrome(long product)
{

	//get the length of the array
	//this works because every time you add 1
	//to any exponent, a place holder is added
	//you add 1 at the end because 10^0=1 
	//10^1=10, 10^2=100 --> the 0 indicates the 
	//first placeholder
	int length = (int) floor( log10( (float) product) ) + 1; //CORRECT!
	//printf("THE LENGTH OF THE CURRENT NUMBER IS:  %d\n", length);

	//maybe add 1 in order to add the null character at the end
	char arr[length+1]; //CORRECT!
	
	//snprint( input array, size, the string, the number )
	snprintf(arr, sizeof(arr), "%ld", product);
	//printf("THE ARRAY HOLDS: %s\n", arr); //CORRECT


	//now check if the array contains a palindrome
	int isPalindrome = 1;
	int j;
	int k;

	int boundary = floor(length/2);
	//printf("THE MIDDLE OF THE ARRAY IS AT POSITION: %d\n", boundary);
	for(j = 0, k = length - 1; j < floor(length/2); ++j, --k )
	{
		//printf("arr[j] = %c\n", arr[j]);
		//printf("arr[k] = %c\n", arr[k]);
		if(arr[j] == arr[k])
		{
			//printf("ENDS MATCH!\n");
			continue;
		}
		else
		{
			//printf("NOT A PALINDROME!\n");
			isPalindrome = 0;
			break;
		}
	}

	if(isPalindrome)
	{
		//printf("FOUND A PALINDROME: %ld\n", product);
	}

	return isPalindrome;

}

