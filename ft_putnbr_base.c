/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 18:11:26 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/16 01:03:53 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(int n, char *base, int *count)
{
	long long	base_n;
	long long	num;

	num = (unsigned int)n;
	base_n = ft_strlen(base);
	if (num > base_n)
	{
		ft_putnbr_base(num / base_n, base, count);
		ft_putnbr_base(num % base_n, base, count);
	}
	else
	{
		ft_putchar_fd(base[num % base_n], 1);
		(*count)++;
	}
}
