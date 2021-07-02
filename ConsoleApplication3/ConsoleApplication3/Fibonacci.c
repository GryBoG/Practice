#include "Fibonacci.h"

void fibonacci()
{
	printf("Число фибоначчи [0]: 0\n"
		"Число фибоначчи [1]: 1\n"
		"Число фибоначчи [2]: 1\n");
	for (int i = 3; i <= num; ++i)
	{
		c = a + b;
		a = b; b = c;
		input_s(i <= 80 ? "Число фибоначчи [%d]: %.0lf\n" : "Число фибоначчи [%d]: %e\n", i, b);
	}
}