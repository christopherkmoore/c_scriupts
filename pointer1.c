// This is how I want to live my life.
// It would be way cooler to start scripts or programs with a poem.

#include <stdio.h>

int main(void) 
{
	int count = 10;
	int *int_pointer;
	
	int_pointer = &count;

	// mutate the original
	count = 20;	

	printf("Count is %i\n", count);
	printf("int_pointer is %i\n", *int_pointer);

	// without the unary operators. let's see if it compiles
	int newCount = 420;
	int newIntPointer;

	newIntPointer = newCount;

	// I suspect that the value is merely copied. Lets find out.
	
	newCount = 421;

	printf("newIntPointer is %i\n", newIntPointer);
}
