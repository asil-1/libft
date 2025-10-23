/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:59:11 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/23 16:33:30 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && (big[j + i] == little[j]) && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	big[] = "";
// 	char	little[] = "yewufw";
// 	size_t	len = 2;

// 	printf("%zu\n", len);
// 	printf("%s\n", ft_strnstr(big, little, len));
// 	printf("%s\n", strnstr(big, little, len));
// }
