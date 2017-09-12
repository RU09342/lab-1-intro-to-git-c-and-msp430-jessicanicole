#include <stdio.h>
#include "Math.h"

//Function declaration
int math(int num1, int num2, char op)
{
	int result;
	switch (op)
	{
	//Addition
	case '+':
	{
		result = num1 + num2;
		return result;
	}
	//Subtraction 
	case '-':
	{
		result = num1 - num2;
		return result;
	}
	//Multiplication
	case '*':
	{
		result = num1 * num2;
		return result;
	}
	//Division
	case '/':
	{
		result = num1 / num2;
		return result;
	}
	//Modulus 
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