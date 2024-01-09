#include <stdarg.h>
#include <stdio.h>

float	average(int n, ...)
{
	va_list	ap;
	int		total;
	int		i;

	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total = total + va_arg(ap, int);
		++i;
	}
	return ((float)total / n);
}

int	main(void)
{
	float	avg_age;

	avg_age = average(3, 10, 15, 20);
	printf("Avg: %f\n", avg_age);
	return (0);
}
