/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldepenne <ldepenne@student.42angouleme.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 19:03:16 by ldepenne          #+#    #+#             */
/*   Updated: 2025/10/30 19:51:00 by ldepenne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newlist;

	newlist = malloc(sizeof(t_list));
	if (!newlist)
		return(NULL);
	newlist->content = content;
	newlist->next = NULL;
	return (newlist);
}
#include <stdio.h>
int	main(void)
{
	char	*a = "raccoon";
	char	*b = "renard";
	t_list	*node;
	t_list	*nodeux;

	node = ft_lstnew(a);
	nodeux = ft_lstnew(b);
	node->next = nodeux;
	printf("%s\n", (char *)node->next->content);
}
