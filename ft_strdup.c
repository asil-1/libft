/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 19:21:55 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/24 11:07:12 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*result;

	len = ft_strlen(s);
	result = malloc(sizeof(char) * len + 1);
	if (result == NULL)
		return (NULL);
	result = ft_memcpy(result, s, len + 1);
	return (result);
}

// int	main(void)
// {
// 	char	s[] = "ca marche, on va au bar";

// 	printf("%s\n", ft_strdup(s));
// 	printf("%s\n", strdup(s));
// }
