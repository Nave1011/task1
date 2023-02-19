#include<stdio.h>
#include"header.h"

int main()
{
	printf("\n This is main function...Calling the printHello Function...\n");
	printhello();
	printf("\n Back to main function... Calling the add Function...\n");
	add(5,2);
	printf("\n Back to main function...Calling the factorial Function...\n");
	factorial(5);
	printf("\n\n Back to main function...\n\n End of program...");
}
