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
		break;
	}
	//Subtraction 
	case '-':
	{
		result = num1 - num2;
		break;
	}
	//Multiplication
	case '*':
	{
		result = num1 * num2;
		break;
	}
	//Division
	case '/':
	{
		result = num1 / num2;
		break;
	}
	//Modulus 
	case '%':
	{
		result = num1 % num2;
		break;
	}
	default:
	{
		return 0;
	}
	return result;
	}
}