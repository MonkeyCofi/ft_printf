/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:17:22 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/09 14:06:42 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	char		*new;
// 	int			index;
// 	int			end;
// 	size_t		size;
// 	int			j;

// 	index = 0;
// 	j = 0;
// 	end = ft_strlen(s1) - 1;
// 	while (ft_strchr(set, s1[index]))
// 		index++;
// 	while (ft_strchr(set, s1[end]))
// 		end--;
// 	end++;
// 	size = end - index;
// 	if ((int)size < 0)
// 		size *= -1;
// 	new = (char *) malloc(sizeof(char) * size + 1);
// 	if (new == NULL)
// 		return (NULL);
// 	while (index < end)
// 	{
// 		new[j] = s1[index];
// 		j++;
// 		index++;
// 	}
// 	new[j] = '\0';
// 	return (new);
// }

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_word;
	size_t	new_length;

	while (ft_strchr((char *)set, (char)*s1) && *s1 && set)
		(char *)s1++;
	new_length = ft_strlen(s1);
	while (ft_strchr(set, (char)s1[new_length - 1]) && *s1 && set)
		new_length--;
	trimmed_word = (char *)malloc(sizeof(char) * new_length + 1);
	if (trimmed_word == NULL)
		return (NULL);
	ft_strlcpy(trimmed_word, s1, new_length + 1);
	return (trimmed_word);
}
