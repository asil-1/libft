/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 18:28:27 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/26 16:51:43 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

// char	**ft_split(char const *s, char c)
// {
// 	uhgeuigrh
// }

int	ft_count_word(char *s, char sep)
{
	int	i;
	int	word;

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

int	main(void)
{
	char	s[] = "..les.feuilles.sont..oranges.";
	char	sep = '.';

	printf("%d\n", ft_count_word(s, sep));
}
