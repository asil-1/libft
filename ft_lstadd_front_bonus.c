/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 11:04:24 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/01 19:06:36 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int	main(void)
// {
// 	t_list	*node1;
// 	t_list	*node2;
// 	t_list	*node3;
// 	t_list	*node4;
// 	t_list	*tmp;
// 	t_list	*tmp2;
// 	char	*a = "le";
// 	char	*b = "caca";
// 	char	*c = "est";
// 	char	*d = "cuit";

// 	node1 = ft_lstnew(a);
// 	node2 = ft_lstnew(b);
// 	node3 = ft_lstnew(c);
// 	node4 = ft_lstnew(d);
// 	ft_lstadd_front(&node4, node3);
// 	ft_lstadd_front(&node3, node2);
// 	ft_lstadd_front(&node2, node1);

// 	tmp = node1;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp2 = tmp;
// 		tmp = tmp->next;
// 		free(tmp2);
// 	}
// }
