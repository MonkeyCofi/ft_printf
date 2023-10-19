/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:50:40 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/11 16:06:16 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	unsigned char	*s1_ptr;
// 	unsigned char	*s2_ptr;
// 	size_t			i;
// 	int				ans;

// 	s1_ptr = (unsigned char *)s1;
// 	s2_ptr = (unsigned char *)s2;
// 	ans = 0;
// 	if (n == 0)
// 		return (0);
// 	while (i < n - 1 && s1_ptr && s2_ptr)
// 	{
// 		if (s1_ptr[i] != s2_ptr[i])
// 		{
// 			ans = (s1_ptr[i] - s2_ptr[i]);
// 			break ;
// 		}
// 		i++;
// 	}
// 	return (ans);
// }

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			i;

	i = 0;
	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	while (i < n && s1_ptr && s2_ptr)
	{
		if (s1_ptr[i] > s2_ptr[i])
			return (1);
		else if (s1_ptr[i] < s2_ptr[i])
			return (-1);
		i++;
	}
	return (0);
}

