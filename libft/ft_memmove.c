/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:44:22 by pipolint          #+#    #+#             */
/*   Updated: 2023/09/12 13:57:39 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	char	*dest_ptr;
// 	char	*src_ptr;

// 	src_ptr = (char *)src;
// 	dest_ptr = (char *)dest;
// 	// if ((dest_ptr < src_ptr + n) && (src_ptr < dest_ptr + n))
// 	if (src_ptr < dest_ptr + n && src_ptr >= dest_ptr)
// 	{
// 		while (n > 0)
// 		{
// 			*dest_ptr = *src_ptr;
// 			dest_ptr++;
// 			src_ptr++;
// 			n--;
// 		}
// 	}
// 	else
// 		while (n--)
// 			*dest_ptr++ = *src_ptr++;
// 	return (dest);
// }

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	i;

	i = n - 1;
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	while (n--)
	{
		*(dest_ptr + i) = *(src_ptr + i);
		i--;
	}
	return (dest);
}
