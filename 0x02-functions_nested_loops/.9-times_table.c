#include "main.h"

/**
 * times_table - prints the 9 times tables, starting with 0
 * Return: empty output
 */

void times_table(void)
{
	int x, y, z, u, d;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z > 9)
	{
	u = z % 10;
	d  = 
