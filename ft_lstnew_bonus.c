/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:10:36 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/18 02:12:44 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nw_node;

	nw_node = (t_list *)malloc(sizeof(t_list));
	if (nw_node == NULL)
		return (NULL);
	nw_node->content = content;
	nw_node->next = NULL;
	return (nw_node);
}
