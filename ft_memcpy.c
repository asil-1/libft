/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 09:24:13 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/23 11:27:14 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dest || src)
	{
		while (src && i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
		while (i < n)
		{
			((unsigned char *)dest)[i] = '\0';
			i++;
		}
	}
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	(void)argc;
// 	printf("%s", (unsigned char *)ft_memcpy(argv[1], argv[2], 4));
// 	return (0);
// }
