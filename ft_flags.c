/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:32:27 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/20 20:11:29 by uwubuntu         ###   ########.fr       */
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

static void	ft_print_width(int width, int *count)
{
	int	i;

	i = 0;
	while (i < width)
	{
		ft_putchar_fd(' ', 1);
		(*count)++;
		i++;
	}
}

void	ft_flags(char **format, va_list args)
{
	int		format_len;
	int		flag_len;
	void	(*f)(int, int *);

	if (!ft_is_not_type(*format))
		return ;
	f = ft_print_width;
	format_len = ft_strlen(*format);
	while (ft_is_not_type(*format))
	{
		if (ft_isdigit(**format))
		{
			printf("width specifier detected: %c\n", **format);
		}
		(*format)++;
	}
	(void)flag_len;
	(void)format_len;
	(void)args;
	(void)f;
	return ;
}
