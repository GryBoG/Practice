#include "testlogic.h"

int test()
{
	if (num <= 0)
	{
		printf("����� ��������� [0]: 0\n");

	}
	else if (num <= 1)
	{
		printf("����� ��������� [0]: 0\n");
		printf("����� ��������� [1]: 1\n");
	}
	else if (num <= 2)
	{
		printf("����� ��������� [0]: 0\n");
		printf("����� ��������� [1]: 1\n");
		printf("����� ��������� [2]: 1\n");
	}
	else
	{
		fibonacci();
		return;
	}
}

