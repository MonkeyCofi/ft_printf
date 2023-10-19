/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:01:46 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/06 18:08:12 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_length(long n)
{
	int	digits;

	digits = 1;
	if (n < 0)
	{
		n *= -1;
		digits++;
	}
	while (n / 10 > 0 && digits++)
		n /= 10;
	return (digits);
}

char	*ft_itoa(int n)
{
	char		*number;
	size_t		i;
	long		nb;

	nb = n;
	i = ft_get_length(nb);
	number = (char *)malloc(i + 1);
	number[i--] = '\0';
	if (nb == 0)
		number[i] = '0';
	else if (nb < 0)
	{
		nb *= -1;
		number[0] = '-';
	}
	while (nb > 0)
	{
		number[i--] = (nb % 10) + '0';
		nb /= 10;
	}
	return (number);
}