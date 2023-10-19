/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 17:36:49 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/13 21:51:21 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// arguments needed to parse string
	// the format string
	// the list of arguments; so that the list can be passed to replace specifier function
	// the count of characters written

// this function will parse the format string
void	ft_parse_string(const char **format, va_list args, int *count)
{
	char spec;

	while (**format)
	{
		if (**format != '%')
		{
			ft_putchar_fd(**format, 1);
			// (*format)++;
		}
		else
		{
			spec = ft_get_specifier(&*format);
			*count = ft_replace_specifier((char **)&*format, spec, args);
		}
		(*format)++;
	}
	(void)args;
	(void)count;
}