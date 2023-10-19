/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:55:24 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/10/18 18:32:19 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int		ft_printf(const char *format, ...);
void	ft_putnbr_base(int n, char *base, int *count);
void	ft_print_memory(void *ptr, int *count);


// Print ops
void	ft_print_str(char *str, int *count);
void	ft_print_char(char c, int *count);
void	ft_print_nbr(int n, int *count);
// Print ops

#endif