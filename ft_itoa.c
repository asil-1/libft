/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:10:04 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/31 12:18:53 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_len(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	reverse_str(char *s, int i, int sign)
{
	char	tmp;
	int		start;
	int		end;

	if (sign > 0)
	{
		s[i] = '-';
		i++;
	}
	start = 0;
	end = i -1;
	while (start < end)
	{
		tmp = s[start];
		s[start] = s[end];
		s[end] = tmp;
		start++;
		end--;
	}
	s[i] = '\0';
}

static char	*convert_number(int n, char *str)
{
	int	sign;
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign++;
	}
	while (n > 0)
	{
		nb = n % 10;
		str[i] = nb + '0';
		n = n / 10;
		i++;
	}
	reverse_str(str, i, sign);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = 0;
	if (n == 0)
	{
		str = ft_strdup("0");
		return (str);
	}
	if (n == -2147483648)
	{
		str = ft_strdup("-2147483648");
		return (str);
	}
	str = malloc(sizeof(char) * (digit_len(n) + 1));
	if (!str)
		return (NULL);
	str = convert_number(n, str);
	return (str);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*print;
// 	int	n;

// 	n = -5859;
// 	print = ft_itoa(n);
// 	printf("%s\n", print);
// 	free(print);
// }
