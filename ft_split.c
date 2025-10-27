/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:28:27 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/27 11:32:59 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// attention -> proteger avant, si !s segfault
size_t	ft_count_word(char *s, char sep)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] == sep)
		i++;
	while (s[i])
	{
		if (s[i] == sep && s[i + 1] != sep)
			word++;
		i++;
	}
	if (s[i - 1] != sep)
		word++;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	n;
	size_t	i;
	size_t	start;
	size_t	len;
	size_t	nb_words;

	nb_words = ft_count_word((char *) s, c);
	new = malloc(sizeof(char *) * (nb_words + 1));
	if (!new)
		return (NULL);
	n = 0;
	while (n <= nb_words)
	{
		i = 0;
		start = 0;
		len = 0;
		while (s[i] == c)
		{
			start++;
			i++;
		}
		while (s[i])
		{
			if (s[i] == c)
				break;
			len++;
			i++;
		}
		new[n] = ft_substr(s, start, len);
		s = &s[i];
		n++;
		printf("%zu\n", n);
	}
	return (new);
}

int	main(void)
{
	char	s[] = "..les.feuilles.sont..oranges..";
	char	sep = '.';
	size_t	i = 0;
	char	**print;

	print = ft_split(s, sep);
	while (i <= ft_count_word(s, sep))
	{
		printf("%s\n", print[i]);
		i++;
	}
}
