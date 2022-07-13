#include "main.h"
/**
  * _isalpha - checks for aphabetic character
  * @c: takes in a character
  * Return: 1 if letter, lowercase, uppercase; 0 if not
  */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
