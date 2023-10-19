/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ops.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 00:26:47 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/18 18:30:46 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
		(*count) += 1;
		ft_print_nbr(n, count);
	}
	else if (n > 10)
	{
		ft_print_nbr(n / 10, count);
		ft_print_nbr(n % 10, count);
	}
	else
	{
		ft_print_char(n + '0', count);
	}
}
