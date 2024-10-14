/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:00:49 by cakose            #+#    #+#             */
/*   Updated: 2024/10/03 15:14:02 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		(*len) += 6;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putchar(args[i], len);
		i++;
	}
}

void	ft_putint(int i, int *len)
{
	if (i == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	if (i < 0)
	{
		ft_putchar('-', len);
		ft_putint(i * -1, len);
	}
	else
	{
		if (i > 9)
			ft_putint(i / 10, len);
		ft_putchar(i % 10 + '0', len);
	}
}

void	ft_unsignedint(unsigned int i, int *len)
{
	if (i >= 10)
		ft_unsignedint(i / 10, len);
	ft_putchar(i % 10 + '0', len);
}
