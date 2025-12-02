/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:03:16 by ldepenne          #+#    #+#             */
/*   Updated: 2025/11/04 11:30:23 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


//la modif en newnode
t_list	*ft_lstnew(void *content)
{
	t_list	*newnode;

	newnode = malloc(sizeof(t_list));
	if (!newnode)
		return (NULL);
	newnode->content = content;
	newnode->next = NULL;
	return (newnode);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	*a = "raccoon";
// 	char	*b = "renard";
// 	t_list	*tmp;
// 	t_list	*node;
// 	t_list	*nodeux;

// 	node = ft_lstnew(a);
// 	nodeux = ft_lstnew(b);
// 	node->next = nodeux;
// 	tmp = node;
// 	while (tmp)
// 	{
// 		printf("%s\n", (char *)tmp->content);
// 		tmp = tmp->next;
// 	}
// 	free(node);
// 	free(nodeux);
// }
