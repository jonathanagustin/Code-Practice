#include <stdio.h>
#include <math.h> 
#include <assert.h>
#include <string.h>

unsigned long long biggestProduct = 0;

/*
 * Learning experience: ALWAYS use unsigned long long int for integers
 * This problem shows that integer overflow can lead to a long 
 * debugging!
 *
 */




int main()
{
	char number[] = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	
    //get length of number
    unsigned long long length = strlen(number);

	//debug the length
	assert(length==1000 && "LENGTH IS NOT 1000");
    
    unsigned long long first = 0;
    unsigned long long second = 1;
    unsigned long long third = 2;
    unsigned long long fourth = 3;
    unsigned long long fifth = 4;
    unsigned long long sixth = 5;
    unsigned long long seventh = 6;
    unsigned long long eighth = 7;
    unsigned long long ninth = 8;
    unsigned long long tenth = 9;
    unsigned long long eleventh = 10;
    unsigned long long twelfth = 11;
    unsigned long long thirteenth = 12;

    unsigned long long intnumber = number[first] - '0';

    unsigned long long val1 = 1;
    unsigned long long val2 = 1;
    unsigned long long val3 = 1;
    unsigned long long val4 = 1;
    unsigned long long val5 = 1;
    unsigned long long val6 = 1;
    unsigned long long val7 = 1;
    unsigned long long val8 = 1;
    unsigned long long val9 = 1;
    unsigned long long val10 = 1;
    unsigned long long val11 = 1;
    unsigned long long val12 = 1;
    unsigned long long val13 = 1;

    unsigned long long currentProduct = 1;

    //printf("READING AS AN INT: %d\n", intnumber); //unsigned long long conversion works!

    for(; thirteenth < 1000; ++thirteenth, ++twelfth, ++eleventh, ++tenth, ++ninth, ++eighth, ++seventh , ++sixth, ++fifth, ++fourth, ++third, ++second, ++first)
    {

        //get the value in the array
        val1 = number[first] - '0';
        printf("ITERATING FIRST ITERATOR AT POSITION: %llu\n", first);
        //printf("THE VALUE OF THE FIRST ITERATOR IS: %d\n", val1);

        val2 = number[second] - '0';
        val3 = number[third] - '0';
        val4 = number[fourth] - '0';
        val5 = number[fifth] - '0';
        val6 = number[sixth] - '0';
        val7 = number[seventh] - '0';
        val8 = number[eighth] - '0'; 
        val9 = number[ninth] - '0';
        val10 = number[tenth] - '0';
        val11 = number[eleventh] - '0';
        val12 = number[twelfth] - '0';
        val13 = number[thirteenth] - '0';
        
        printf("ITERATING THIRTEENTH ITERATOR AT POSITION: %llu\n", thirteenth);
        //printf("THE VALUE OF THE THIRTEENTH ITERATOR IS: %d\n", val13);


        //printf("first = %d\n thirteeth=%d\n\n", val1, val3);        
    

        currentProduct = val1*val2*val3*val4*val5*val6*val7*val8*val9*val10*val11*val12*val13;

        //printf("THE CURRENT PRODUCT IS: %d\n", currentProduct);

        if(currentProduct > biggestProduct)
        {
            printf("FOUND NEW BIGGEST PRODUCT!\n");
            biggestProduct = currentProduct;
        }

       
    }

    printf("THE BIGGEST PRODUCT OVERALL IS: %llu\n", biggestProduct);

	return 0;
}
