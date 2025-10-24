/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 10:39:49 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/24 12:09:03 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
