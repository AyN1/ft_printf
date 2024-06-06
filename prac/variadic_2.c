/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:04:33 by atbicer           #+#    #+#             */
/*   Updated: 2024/06/06 11:12:17 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

float	average(int n, ...)
{
	int		total;
	int		i;
	va_list	ap;

	va_start(ap, n);
	total = 0;
	i = 0;
	while (i < n)
	{
		total += va_arg(ap, int);
		++i;
	}
	va_end(ap);
	return ((float)(total / n));
}

int	main(void)
{
	float	average_age;

	average_age = average(3, 10, 50, 70);
	printf("avg: %f\n", average_age);
}
