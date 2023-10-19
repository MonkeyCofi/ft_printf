/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:48:34 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/11 00:49:12 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substring;
	unsigned int	s_length;

	s_length = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > s_length || len == 0)
		return (ft_strdup(""));
	if (len >= s_length || (start + (len - 1) >= s_length))
		substring = (char *)malloc(sizeof(char) * (s_length - start) + 1);
	else
		substring = (char *)malloc(sizeof(char) * len + 1);
	if (!substring)
		return (NULL);
	ft_strlcpy(substring, (s + start), len + 1);
	return (substring);
}

