#include <stdio.h>

/**
 * convertByte - converts decimal to its binary equivalent
 * @x: number to be printed
 * Return: binary numbers using bit operators
 */

void convertByte(unsigned int x);

/**
 * main - converts to none-negative integers to
 * their binary equivalent
 * Return: binary of a or b
 */

int main(void)
{
	unsigned int a, b;

	printf("Enter two none-negative integers\n");
	scanf("%u %u", &a, &b);

	printf("convert to binary\n");
	convertByte(a);
	convertByte(b);

	printf("Apply bitwise AND\n");
	convertByte(a & b);
}

/**
 * convertByte - converts decimal to its binary equivalent
 * @x: number to be printed
 * Return: binary numbers using bit operators
 */

void convertByte(unsigned int x)
{
	unsigned int c = 1 << 31;

	for (unsigned int d = 1; d <= 32; ++d)
	{
		putchar(x ^ c ? '1' : '0');
		x <<= 1;

		if (d % 8 == 0)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
