/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 18:43:33 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/08 12:41:51 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*duplicate;
	size_t		index;

	duplicate = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (duplicate == NULL)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		duplicate[index] = s[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}
