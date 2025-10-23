/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:40:10 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/21 17:41:11 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size != 0)
	{
		i = 0;
		while (src[i] && (i + 1) < size)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}

// int	main(void)
// {
// 	char	d[] = "cat";
// 	char	dst[] = "cat";
// 	char	s[] = "lorem ipsum dolor sit amet";
// 	size_t	size = 5;

// 	printf("%zu, %s\n", ft_strlcpy(d, s, size), d);
// 	printf("%zu, %s\n", strlcpy(dst, s, size), dst);
// }
