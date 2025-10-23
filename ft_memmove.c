/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:39:49 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/23 11:28:27 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest || src)
	{
		if (dest > src)
		{
			while (n > 0)
			{
				n--;
				((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
			}
		}
		else
		{
			while (i < n)
			{
				((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
				i++;
			}
		}
	}
	return (dest);
}

// int	main(void)
// {
// 	char	s[] = "chat";
// 	char	d[] = "test";
// 	char	src[] = "chat";
// 	char	dest[] = "test";
// 	size_t	n = 2;

// 	printf("%s\n", (unsigned char *)ft_memmove(d, s, n));
// 	printf("%s\n", (unsigned char *)memmove(dest, src, n));
// }
	// printf("%s\n", (unsigned char *)ft_memmove(&s[4], s, n));
	// printf("%s\n", (unsigned char *)memmove(&src[4], src, n));
