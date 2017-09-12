#include <stdio.h>
#include "Math.h"

int math(int num1, int num2, char op)
{
	int result;
	switch (op)
	{
	case '+':
	{
		result = num1 + num2;
		return result;
	}
	case '-':
	{
		result = num1 - num2;
		return result;
	}
	case '*':
	{
		result = num1 * num2;
		return result;
	}
	case '/':
	{
		result = num1 / num2;
		return result;
	}
	case '%':
	{
		result = num1 % num2;
		return result;
	}
	default:
	{
		return 0;
	}
	}
}