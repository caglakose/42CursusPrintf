/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cakose <cakose@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:01:02 by cakose            #+#    #+#             */
/*   Updated: 2024/10/03 14:28:43 by cakose           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);
void	ft_putchar(char c, int *length);
void	ft_putstr(char *args, int *length);
void	ft_putint(int i, int *len);
void	ft_unsignedint(unsigned int i, int *len);
void	ft_putptr(size_t ptr, int *len);
void	ft_puthex(unsigned int hex, int *len, char uppercase);

#endif
