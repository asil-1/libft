/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:28:27 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/29 15:47:55 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_count_word(char *s, char sep)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != sep)
		{
			while (s[i] && s[i] != sep)
				i++;
			word++;
			continue ;
		}
		i++;
	}
	return (word);
}

size_t	ft_leni(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c)
	{
		i++;
	}
	while (s[i])
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

void	ft_free(char **new, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		free(new[i]);
		i++;
	}
	free(new);
}

char	*ft_strange(char const *s, char c, char *new)
{
	size_t	i;
	size_t	start;
	size_t	len;

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
			break ;
		len++;
		i++;
	}
	new = ft_substr(s, start, len);
	if (!new)
		return (NULL);
	return (new);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	n;
	size_t	i;
	size_t	nb_words;

	if (!s)
		return (NULL);
	nb_words = ft_count_word((char *) s, c);
	new = malloc(sizeof(char *) * (nb_words + 1));
	if (!new)
		return (NULL);
	n = -1;
	while (++n < nb_words)
	{
		new[n] = ft_strange(s, c, new[n]);
		if (new[n] == NULL)
		{
			ft_free(new, n);
			return (NULL);
		}
		i = ft_leni(s, c);
		s = &s[i];
	}
	new[n] = NULL;
	return (new);
}

// int	main(void)
// {
// 	char	**print;
// 	char	*s = "" ;
// 	char	sep = ' ';
// 	size_t	nb_words;
// 	size_t	i = 0;

// 	nb_words = ft_count_word(s, sep);
// 	print = ft_split(s, sep);
// 	// if (!print)
// 	// 	return (NULL);
// 	while (print[i])
// 	{
// 		printf("%s\n", print[i]);
// 		i++;
// 	}
// 	printf("%s\n", print[i]);
// 	while (i > 0)
// 	{
// 		i--;
// 		free(print[i]);
// 	}
// 	free(print);
// }
