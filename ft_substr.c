/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 13:46:59 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/25 18:04:24 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	check;
	char	*substr;

	if (s == NULL)
		return (NULL);
	check = ft_strlen(s);
	if (check - start > 0 && check - start < len)
		len = check - start;
	if (start >= check)
		len = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	j = 0;
	while (j < len)
	{
		substr[j] = s[start];
		start++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	char	s[] = "";
// 	unsigned int	strat = 0;
// 	size_t len = 1;
// 	char	*result;

// 	result = ft_substr(s, strat, len);
// 	printf("%s\n", result);
// 	free(result);
// }
