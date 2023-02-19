#include<stdio.h>
#include"header.h"
#include<unistd.h>
void printhello()
{
	printf("\n This is printHello Function\n");
	printf("\n PID of printHello.c is %d\n",getpid());
}
