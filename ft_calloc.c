/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:22:49 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/24 11:55:37 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int	*calloc;

	calloc = malloc(nmemb * size);
	if (calloc == NULL)
		return (NULL);
	if (nmemb == 0 || size == 0)
		return (calloc);
	ft_bzero(calloc, nmemb * size);
	return (calloc);
}

// int	main(void)
// {
// 	size_t	*array;
// 	size_t	nmemb = 2;
// 	size_t	size = sizeof(size_t);
// 	size_t	i = 0;

// 	array = ft_calloc(nmemb, size);
// 	while (i < nmemb)
// 	{
// 		printf("%zu\n", array[i]);
// 		i++;
// 	}
// 	printf("%s\n", (unsigned char *)calloc(nmemb, size));
// 	return (0);
// }
