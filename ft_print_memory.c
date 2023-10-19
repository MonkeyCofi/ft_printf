/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:06:58 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/16 12:56:37 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_hex(unsigned char byte, int *count)
{
	if (byte / 16 < 10)
		ft_putchar_fd(48 + (byte / 16), 1);
	else
		ft_putchar_fd(87 + (byte / 16), 1);
	(*count)++;
	if (byte % 16 < 10)
		ft_putchar_fd(48 + (byte % 16), 1);
	else
		ft_putchar_fd(87 + (byte % 16), 1);
	(*count)++;
}

void	ft_print_memory(void *ptr, int *count)
{
	unsigned char	*byte;
	int				n;

	n = 5;
	byte = (unsigned char *)&ptr;
	ft_print_str("0x", count);
	while (n >= 0)
	{
		ft_print_hex(*(byte + n), count);
		n--;
	}
}
