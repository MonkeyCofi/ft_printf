/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:16:37 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/06 15:19:32 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			index;

	index = 0;
	s_ptr = (unsigned char *)s;
	while (index < n)
	{
		if (s_ptr[index] == (unsigned char)c)
		{
			return (&s_ptr[index]);
		}
		index++;
	}
	return (0);
}