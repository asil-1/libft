/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 17:22:49 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/24 12:04:25 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
