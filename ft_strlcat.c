/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:04:52 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/21 17:57:22 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[j])
		j++;
	len = ft_strlen(src);
	if (size <= j)
		return (size + len);
	while (src[i] && (j + i + 1) < size)
	{
		dst[j + i] = src[i];
		i++;
	}
	dst[j + i] = '\0';
	return (len + j);
}

// int	main(void)
// {
// 	char	d[50] = "a";
// 	char	dst[50] = "a";
// 	char	s[50] = "lorem ipsum dolor sit amet";
// 	size_t	size = 0;

// 	printf("%zu, %s\n", ft_strlcat(d, s, size), d);
// 	printf("%zu, %s\n", strlcat(dst, s, size), dst);
// }
