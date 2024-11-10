/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 08:51:54 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/05 14:44:46 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *help;
	if (lst == NULL || *lst == NULL)
		return ;
	while (help != NULL)
	{
		help = (*lst)-> next;
		del((*lst)->content);
		free (*lst);
		*lst = help;
	}
	*lst = NULL;
}
