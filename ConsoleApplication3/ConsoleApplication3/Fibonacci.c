#include "Fibonacci.h"

void fibonacci()
{
	printf("����� ��������� [0]: 0\n"
		"����� ��������� [1]: 1\n"
		"����� ��������� [2]: 1\n");
	for (int i = 3; i <= num; ++i)
	{
		c = a + b;
		a = b; b = c;
		input_s(i <= 80 ? "����� ��������� [%d]: %.0lf\n" : "����� ��������� [%d]: %e\n", i, b);
	}
}