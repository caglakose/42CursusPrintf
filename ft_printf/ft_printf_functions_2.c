/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_functions_2.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:00:42 by cakose            #+#    #+#             */
/*   Updated: 2024/10/04 15:20:01 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(size_t ptr, int *len)
{
	char	string[25];
	int		i;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		(*len) += 5;
		return ;
	}
	write(1, "0x", 2);
	(*len) += 2;
	while (ptr != 0)
	{
		string[i] = base[ptr % 16];
		ptr = ptr / 16;
		i++;
	}
	while (i--)
		ft_putchar(string[i], len);
}

void	ft_puthex(unsigned int x, int *len, char caps)
{
	char	string[25];
	char	*base;
	int		i;

	if (caps == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	while (x != 0)
	{
		string[i] = base[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar(string[i], len);
}
