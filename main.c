/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:14:30 by atbicer           #+#    #+#             */
/*   Updated: 2024/06/26 13:33:42 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_printf(const char *format, ...);

int	main(void)
{
	int	count;
	int	test;

	test = INT32_MIN;
	// ft_printf("Hello %s, today is %d, in hex %x, char->%c\n");
	// printf("Hello %s, today is %d, in hex %x, char->%c\n");
	// ft_printf("test\n");
	count = ft_printf("Hello %s\n", "John");
	ft_printf("count(%d)\n", count);
	count = ft_printf("[%d]\n", test);
	ft_printf("The chars written are [%d]\n", count);
	ft_printf("hex: [%X]\n", 100023);
	ft_printf("%%\n");
	// Address
	count = ft_printf("Addr: [%p]\n", (void *)-14523);
	ft_printf("Addr: count(%d)\n", count);
	// Unsigned int
	ft_printf("\nUINT tests: \n");
	ft_printf("[%u]\n", 0);
	ft_printf("[%u]\n", -10);
	ft_printf("[%u]\n", -200000);
	ft_printf("[%u]\n", -6000023);
	ft_printf("[%u]\n", 10000);
	ft_printf("[%u]\n", 100023);
	ft_printf("[%u]\n", INT_MAX);
	ft_printf("[%u]\n", INT_MIN);
	ft_printf("[%u]\n", UINT_MAX);
	ft_printf("dgs%uxx\n", 10);
	ft_printf("%u%uu%u\n", 1, 2, -3);
	//
	printf("\n\n[Real below]\n\n"); // real
	//
	count = printf("Hello %s\n", "John");
	printf("count(%d)\n", count);
	count = printf("[%d]\n", test);
	printf("The chars written are [%d]\n", count);
	printf("hex: [%X]\n", 100023);
	printf("%%\n");
	// Address
	count = printf("Addr: [%p]\n", (void *)-14523); // p
	printf("Addr: count(%d)\n", count);
	// Unsigned int
	printf("\nUINT tests: \n");
	printf("[%u]\n", 0);
	printf("[%u]\n", -10);
	printf("[%u]\n", -200000);
	printf("[%u]\n", -6000023);
	printf("[%u]\n", 10000);
	printf("[%u]\n", 100023);
	printf("[%u]\n", INT_MAX);
	printf("[%u]\n", INT_MIN);
	printf("[%u]\n", UINT_MAX);
	printf("dgs%uxx\n", 10);
	printf("%u%uu%u\n", 1, 2, -3);
	//
	// LIBFT test
	return (0);
}
