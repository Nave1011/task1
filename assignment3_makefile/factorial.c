#include<stdio.h>
#include"header.h"

void factorial(int a)
{
	printf("\n This is factorial function\n");
	int f=1;
	for(int i=1;i<=a;i++)
		f*=i;
	printf("\n Factorial of %d is : %d",a,f);
}
