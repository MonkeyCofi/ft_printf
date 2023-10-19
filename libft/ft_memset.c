/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 21:50:45 by pipolint          #+#    #+#             */
/*   Updated: 2023/09/01 21:07:07 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//void	*ft_memset(void *s, int c, size_t n)
//{
//	size_t	index;
//	char	*ptr;
//
//	index = 0;
//	ptr = (char *)s;
//	while (index < n)
//	{
//		ptr[index] = c;
//		index++;
//	}
//	return (ptr);
//}

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	index = 0;
	while (index < n)
	{
		ptr[index] = c;
		index++;
	}
	return ((unsigned char *)s);
}
