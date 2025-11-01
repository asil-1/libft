/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 16:55:43 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/31 18:21:46 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return(count);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*node5;
// 	char	*a = "bonjour";
// 	char	*b = "le";
// 	char	*c = "jour";
// 	char	*d = "je";
// 	char	*e = "suis";

// 	node1 = ft_lstnew(a);
// 	node2 = ft_lstnew(b);
// 	node3 = ft_lstnew(c);
// 	node4 = ft_lstnew(d);
// 	node5 = ft_lstnew(e);
// 	ft_lstadd_front(&node5, node4);
// 	ft_lstadd_front(&node4, node3);
// 	ft_lstadd_front(&node3, node2);
// 	ft_lstadd_front(&node2, node1);
// 	printf("%d\n", ft_lstsize(node1));
// 	free(node1);
// 	free(node2);
// 	free(node3);
// 	free(node4);
// 	free(node5);
// }
