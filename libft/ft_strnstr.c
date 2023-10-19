/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:43:07 by pipolint          #+#    #+#             */
/*   Updated: 2023/09/09 12:44:03 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	big_i;
// 	size_t	little_i;

// 	big_i = 0;
// 	little_i = 0;
// 	if (ft_strlen(little) == 0)
// 		return ((char *)&big[big_i]);
// 	while ((unsigned char)big[big_i] != '\0' && big_i < len)
// 	{
// 		if ((unsigned char)big[big_i] == (unsigned char)little[little_i])
// 		{
// 			little_i++;
// 			big_i++;
// 			if ((unsigned char)little[little_i] == '\0')
// 				return ((char *)&big[big_i - little_i]);
// 		}
// 		else
// 		{
// 			little_i = 0;
// 			big_i++;
// 		}
// 	}
// 	return (0);
// }

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	index;
	size_t	little_len;

	index = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (index < len && *big)
	{
		if (ft_strchr(little, *big) && index + (little_len - 1) < len)
		{
			if (ft_strncmp(big, little, little_len) == 0)
				return ((char *)big);
		}
		big++;
		index++;
	}
	return (0);
}