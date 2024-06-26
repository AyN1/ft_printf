/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atbicer <atbicer@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:14:30 by atbicer           #+#    #+#             */
/*   Updated: 2024/06/26 13:13:38 by atbicer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
	//
	count = ft_printf("Addr: [%p]\n", (void *)-14523); // p
	ft_printf("Addr: count(%d)\n", count);
	//
	printf("\n\n[Real below]\n\n"); // real
	//
	count = printf("Hello %s\n", "John");
	printf("count(%d)\n", count);
	count = printf("[%d]\n", test);
	printf("The chars written are [%d]\n", count);
	printf("hex: [%X]\n", 100023);
	printf("%%\n");
	//
	count = printf("Addr: [%p]\n", (void *)-14523); // p
	printf("Addr: count(%d)\n", count);
	//
	// LIBFT test
	return (0);
}
