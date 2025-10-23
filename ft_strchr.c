/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 10:28:54 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/22 12:19:22 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s && !(*s == (char)c))
	{
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "teste";
// 	int c = '\0';

// 	printf("%p\n", s);
// 	printf("%p\n", ft_strchr(s, c + 256));
// 	printf("%p\n", strchr(s, c + 256));
// }
