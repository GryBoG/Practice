#include "testlogic.h"

int test()
{
	if (num <= 0)
	{
		printf("Число фибоначчи [0]: 0\n");

	}
	else if (num <= 1)
	{
		printf("Число фибоначчи [0]: 0\n");
		printf("Число фибоначчи [1]: 1\n");
	}
	else if (num <= 2)
	{
		printf("Число фибоначчи [0]: 0\n");
		printf("Число фибоначчи [1]: 1\n");
		printf("Число фибоначчи [2]: 1\n");
	}
	else
	{
		fibonacci();
		return;
	}
}

