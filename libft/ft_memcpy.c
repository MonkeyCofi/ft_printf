/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:42:56 by pipolint          #+#    #+#             */
/*   Updated: 2023/09/05 00:32:24 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	index;
	char	*temp;
	char	*src_temp;

	src_temp = (char *)src;
	temp = (char *)dest;
	index = 0;
	while (index < n)
	{
		temp[index] = src_temp[index];
		index++;
	}
	return (dest);
}
