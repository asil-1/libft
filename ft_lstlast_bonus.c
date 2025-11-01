/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 18:09:42 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/31 19:17:37 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*tmp;
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

// 	tmp = node1;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	printf("%s\n", (char *)ft_lstlast(node1)->content);
// }
