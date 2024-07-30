#include "main.h"

/**
  * _putchar - print a character
  * @c: character input
  * Return: 1
  */

int _putchar (char c)
{
	return (write(1, &c, 1));
}
