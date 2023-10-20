/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:32:27 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/20 12:54:09 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// this checks if the specifier is not a character
// if its not a character, it indicates that its
// a flag

// returns 1 if the specifier is not a type
static int	ft_is_not_type(char *format)
{
	format++;
	if (*format != 'c' && *format != 's' && *format != 'd' && *format != 'i'
		&& *format != 'x' && *format != 'X' && *format != 'p' && *format != 'u'
		&& *format != '%')
		return (1);
	return (0);
}

static void	ft_print_width(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		ft_putchar_fd(' ', 1);
		i++;
	}
}

void	ft_flags(char **format, va_list args)
{
	void	(*f)(int);

	f = ft_print_width;
	if (!ft_is_not_type(*format))
		return ;
	(void)args;
	(void)f;
	return ;
}
