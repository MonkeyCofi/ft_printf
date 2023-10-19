/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uwubuntu <uwubuntu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:09:24 by uwubuntu          #+#    #+#             */
/*   Updated: 2023/09/11 16:16:47 by uwubuntu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_words(char const *s, char c)
{
	int	index;
	int	word_count;

	index = 0;
	word_count = 0;
	while (s[index] == c && s[index])
		index++;
	while (s[index] != '\0')
	{
		if (s[index] == c && s[index - 1] != c)
			word_count++;
		if (s[index + 1] == '\0' && s[index] != c)
			word_count++;
		index++;
	}
	return (word_count);
}

static int	ft_get_length(char *s, char c)
{
	int	length;

	length = 0;
	while (*s != c && *s)
	{
		length++;
		s++;
	}
	return (length);
}

// static void	ft_add_words(char **words, char *s, char c)
// {
// 	int		i;
// 	int		j;
// 	int		curr;
// 	char	*word;

// 	i = 0;
// 	curr = 0;
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{
// 			word = malloc(ft_get_length(&s[i], c) + 1);
// 			if (word == NULL)
// 				word = NULL;
// 			j = 0;
// 			while (s[i] != c && s[i] != '\0')
// 				word[j++] = s[i++];
// 			word[j] = '\0';
// 			words[curr++] = word;
// 		}
// 		else
// 			i++;
// 	}
// 	words[curr] = 0;
// }

static void	ft_add_words(char **words, char *s, char c)
{
	int			j;
	size_t		curr;
	char		*word;

	curr = 0;
	while (*s)
	{
		if (*s != c)
		{
			word = (char *)malloc(sizeof(char) * (ft_get_length(s, c) + 1));
			if (word == NULL)
				return ;
			j = 0;
			while (*s != c && *s)
				word[j++] = *s++;
			word[j] = '\0';
			words[curr++] = ft_strdup(word);
			free(word);
		}
		else
			s++;
	}
	words[curr] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	words = (char **)malloc((sizeof(char *) * (ft_get_words(s, c) + 1)));
	if (words == NULL)
		return (NULL);
	ft_add_words(words, (char *)s, c);
	return (words);
}
