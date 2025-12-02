/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_split.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 09:03:32 by ldepenne          #+#    #+#             */
/*   Updated: 2025/12/02 18:15:13 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	count_word(char *s, char sep)
{
	size_t	i;
	size_t	nb_words;

	i = 0;
	nb_words = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != sep)
		{
			while (s[i] && s[i] != sep)
				i++;
			nb_words++;
			continue;
		}
		i++;
	}
	return (nb_words);
}

char	**l_split(char const *s, char c)
{
	char	**new;
	size_t	nb_words;
	size_t	len;
	size_t	n;
	size_t	i;

	if (!s)
		return (NULL);
	nb_words = count_word((char *) s, c);
	new = malloc(sizeof(char *) * (nb_words + 1));
	if (!new)
		return (NULL);
	n = 0;
	i = 0;
	while (n < nb_words && s[i])
	{
		len = 0;
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			len++;
			i++;
		}
		new[n] = ft_substr(s, (i - len), len);
		if (new[n] == NULL)
		{
			while (--n > 0)
				free(new[n]);
			free(new);
			return (NULL);
		}
		n++;
	}
	new[n] = NULL;
	return (new);
}

int	main(void)
{
	char	**print;
	char	*s = "les feuilles tombent de l'arbre";
	char	sep = '/';
	size_t	nb_words;
	size_t	i = 0;

	nb_words = count_word(s, sep);
	print = l_split(s, sep);
	while (print[i])
	{
		printf("%s\n", print[i]);
		i++;
	}
	printf("%s\n", print[i]);
	while (i > 0)
	{
		i--;
		free(print[i]);
	}
	free(print);
}