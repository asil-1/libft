/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:12:32 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/14 15:24:51 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// va falloir proteger avant
char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;
	size_t	size;
	size_t	len;
	size_t	i;
	size_t	j;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	result = malloc(sizeof(char) * size);
	if (!result)
		return (NULL);
	len = ft_strlen(s1);
	i = -1;
	while (s1[++i] && i < size)
		result[i] = s1[i];
	result[i] = '\0';
	i = -1;
	j = ft_strlen(result);
	len = ft_strlen(s2);
	while (s2[++i] && (j + i) < size)
		result[j + i] = s2[i];
	result[j + i] = '\0';
	return (result);
}

int	main(void)
{
	char	dst[] = "pizza ";
	char	src[] = "le raccoon";
	// size_t	size = 6;

	printf("%s\n", ft_strjoin(dst, src));
}
