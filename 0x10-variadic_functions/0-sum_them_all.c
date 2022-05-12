#include "variadic_functions.h"
/**
 * sum_them_all - the sum of all its parameters
 * @n: number of parameters received
 * Return: 0 if n is 0 of the sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum = 0;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	va_end(nums);
	return (sum);
}
