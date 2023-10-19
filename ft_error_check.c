/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:47:59 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/19 16:48:15 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_wrong_type(char *format, va_list args)
{
	char	*num;
	char	ch;

	ch = *(format + 1);
	if (ch == 'c' || ch == 'd' || ch == 'i' || ch == 'u' || ch == 'X'
		|| ch == 'x')
	{
		num = ft_itoa(va_arg(args, int));
		if (num == 0)
			return (1);
	}
	return (0);
}

int	ft_error(char *format, va_list args)
{
	if (ft_wrong_type(format, args))
		return (1);
	return (0);
}
