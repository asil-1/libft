/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:13:17 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/01 17:18:18 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*begin = NULL;
// 	t_list	*node1;
// 	t_list	*node2 = NULL;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*tmp;
// 	t_list	*tmp2;
// 	char	*a = "le";
// 	// char	*b = "caca";
// 	char	*c = "est";
// 	char	*d = "cuit";

// 	node1 = ft_lstnew(a);
// 	// node2 = ft_lstnew(b);
// 	node3 = ft_lstnew(c);
// 	node4 = ft_lstnew(d);
// 	// ft_lstadd_front(&node4, node3);
// 	// ft_lstadd_front(&node1, node3);
// 	// ft_lstadd_front(&node3, node4);

// 	// ft_lstadd_back(&node4, node2);
// 	ft_lstadd_back(&begin, node2);
// 	// ft_lstadd_back(&begin, node3);
// 	// ft_lstadd_back(&begin, node4);

// 	tmp = begin;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp2 = tmp;
// 		tmp = tmp->next;
// 		free(tmp2);
// 	}
// }
