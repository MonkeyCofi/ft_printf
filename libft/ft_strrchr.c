/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 02:27:38 by pipolint          #+#    #+#             */
/*   Updated: 2023/09/08 15:25:58 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	end;

// 	end = ft_strlen((char *) s);
// 	if (!s)
// 		return (NULL);
// 	if (!c)
// 		return ((char *)&s[end]);
// 	while (end >= 0 && s)
// 	{
// 		if (s[end] == c)
// 			return ((char *)&s[end]);
// 		end--;
// 	}
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	size_t	end;

	end = ft_strlen(s);
	if (!s)
		return (NULL);
	while ((unsigned char)s[end] != (unsigned char)c && end != 0)
		end--;
	if (end == 0 && (unsigned char)s[end] != (unsigned char)c)
		return (NULL);
	return ((char *)&s[end]);
}

