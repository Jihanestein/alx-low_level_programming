#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - return sum of 2 num
  * @a: fisrt number
  * @b: second number
  *
  * Return: the sum of a and b
  */

int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - return sub of 2 numb
  * @a: fisrt num
  * @b: second num
  *
  * Return: sub of a and b
  */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - return multiply of two num
  * @a: fisrt num
  * @b: second num
  *
  * Return: the product of a and b
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - return division of 2 num
  * @a: fisrt num
  * @b: second num
  *
  * Return: division of a and b
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - returns whats remain of the division
  * @a: fisrt num
  * @b: second num
  *
  * Return: remain of devision of a and b
  */

int op_mod(int a, int b)
{
	return (a % b);
}
