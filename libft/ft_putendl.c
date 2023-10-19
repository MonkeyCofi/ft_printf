/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pipolint <piercediet06@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:47:42 by pipolint          #+#    #+#             */
/*   Updated: 2023/08/30 13:31:50 by pipolint         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i] != '\0')
			write(1, &s[i++], 1);
		write(1, "\n", 1);
	}
}