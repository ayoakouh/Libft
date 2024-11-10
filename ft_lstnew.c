 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:34:06 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/10/31 19:11:54 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *nw_node;
	nw_node = (t_list *)malloc(sizeof(t_list));
    if (nw_node == NULL)
        return (NULL);
	nw_node->content = content;
	nw_node->next = NULL;
	return (nw_node);
}
