/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_specifier.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:00:25 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/13 15:24:45 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// this function checks the specifier in the *format string and returns accordingly

// d or i = int
// u = unsigned decimal
// c = char
// s = string
// x and X = hexadecimal
// p = pointer; address of given argument
// % = % sign

// char	ft_get_specifier(const char **format)
// {
// 	char	c;
// 	// char	*p;

// 	if (**format == 'c')
// 		c = 'c';
// 	else if (**format == 'u')
// 		c = 'u';
// 	else if (**format == 'd' || **format == 'i')
// 		c = 'd';
// 	else if (**format == 's')
// 		c = 's';
// 	else if (**format == 'x')
// 		c = 'x';
// 	else if (**format == 'X')
// 		c = 'X';
// 	else if (**format == 'p')
// 		c = 'p';
// 	else if (**format == '%')
// 		c = '%';
// 	return (c);
// }

char	ft_get_specifier(const char **format)
{
	char	c;
	char	p;

	p = *(*format + 1);
	if (p == 'c')
		c = 'c';
	else if (p == 'u')
		c = 'u';
	else if (p == 'd' || p == 'i')
		c = 'd';
	else if (p == 's')
		c = 's';
	else if (p == 'x')
		c = 'x';
	else if (p == 'X')
		c = 'X';
	else if (p == 'p')
		c = 'p';
	else if (p == '%')
		c = '%';
	return (c);
}