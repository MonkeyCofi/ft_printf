/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:49:07 by pipolint          #+#    #+#             */
/*   Updated: 2023/09/07 19:55:03 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	index;
	size_t	dest_end;
	size_t	dest_size;
	size_t	src_size;

	dest_end = ft_strlen(dest);
	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	index = 0;
	if (!size || dest_size >= size)
		return (src_size + size);
	while (src[index] != '\0' && dest_end < size - 1)
	{
		dest[dest_end] = src[index];
		dest_end++;
		index++;
	}
	dest[dest_end] = '\0';
	return (dest_size + src_size);
}
