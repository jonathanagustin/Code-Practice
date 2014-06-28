#include <stdio.h>

int main()
{
	int control;
    int firstnum = 0;
	int secondnum = 1;
	int current = 0;
	int answerbuffer = 0;

	for(current = 0; current < 4000000; )
	{
		//print iteration
		//printf("control: %d\n", control);
		
		//check if current number is even
		//if even, then add to answerbuffer
		if(current%2 == 0)
		{
			printf("EVEN FIBONACCI FOUND: %d\n", current);
			answerbuffer += current;
			printf("CURRENT ANSWER: %d\n", answerbuffer);
		}		
	
		//in the next iteration, the secondnum is now the first
		firstnum = secondnum;

		//in the next iteration, the current number is now the secondnum
		secondnum = current;
	
		//add the previous two numbers to come up with new current number
		current = firstnum + secondnum;
	
	}
	
	printf("FINAL ANSWER: %d\n", answerbuffer);

	return 0;
}
