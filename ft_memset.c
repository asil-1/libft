/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:27:26 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/20 11:53:05 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = c;
		i++;
	}
	return (s);
}
// int	main(void)
// {
// 	char	s[19] = "ajkshdjkashdkjahsd";
// 	int c = 'i';
// 	size_t n = 3;
// 	printf("%s", (unsigned char*)ft_memset(s, c, n));
// 	return(0);
// }
