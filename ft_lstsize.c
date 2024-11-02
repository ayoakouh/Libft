/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:53:03 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/01 12:07:13 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int 	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

#include <stdlib.h>
#include <stdio.h>
int main()
{
	t_list conten;
	t_list *head;
	head = (t_list *)malloc (sizeof(t_list));
	head->content;
	head->next = NULL;
	int length = ft_lstsize(head);

    printf("The length of the linked list is: %d\n", length);
}
