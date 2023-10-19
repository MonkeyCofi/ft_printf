/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 15:23:48 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/19 16:47:08 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// int	ft_printf(const char *format, ...)
// {
// 	va_list	args;
// 	int		count;

// 	count = 0;
// 	va_start(args, format);
// 	ft_parse_string(&format, args, &count);
// 	return (count);
// }

static void	ft_return_function(char *format, va_list args, int *count)
{
	format++;
	if (*format == 'c')
		ft_print_char(va_arg(args, int), count);
		// ft_putchar_fd(va_arg(args, int), 1);
	else if (*format == 'd' || *format == 'i')
		ft_print_nbr(va_arg(args, int), count);
		// ft_putnbr_fd(va_arg(args, int), 1);
	else if (*format == 's')
		ft_print_str(va_arg(args, char *), count);
		// ft_putstr_fd(va_arg(args, char *), 1);
	else if (*format == 'x')
		ft_putnbr_base(va_arg(args, int), "0123456789abcdef", count);
	else if (*format == 'X')
		ft_putnbr_base(va_arg(args, int), "0123456789ABCDEF", count);
	else if (*format == 'p')
		ft_print_memory(va_arg(args, void *), count);
	else if (*format == 'u')
		ft_putnbr_base(va_arg(args, int), "0123456789", count);
	else if (*format == '%')
		ft_print_char('%', count);
}

static int	ft_print_op(const char *format, va_list args)
{
	int	printed;

	printed = 0;
	while (*format)
	{
		if (*format != '%')
		{
			ft_putchar_fd(*format, 1);
			printed++;
		}
		else
		{
			if (ft_error((char *)format, args) == 1)
			{
				ft_putstr_fd("Wrong type given\n", 2);
				return (0);
			}
			ft_return_function((char *)format, args, &printed);
			format++;
		}
		format++;
	}
	return (printed);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = ft_print_op(format, args);
	va_end(args);
	return (count);
}
