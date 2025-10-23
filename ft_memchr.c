/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 09:39:13 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/23 10:44:44 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	s[] = "crayon de bois";
// 	int	c = 'a';
// 	size_t	n = 0;
// 	printf("%s\n", (unsigned const char *)ft_memchr(s, c, n));
// 	printf("%s\n", (unsigned const char *)memchr(s, c, n));
// 	return (0);
// }
