/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 08:53:03 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 16:59:33 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int 	count;
	t_list	*ptr;

	count = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr -> next;
	}
	return (count);
}

t_list *create_node(void *content) {
    t_list *new_node = (t_list *)malloc(sizeof(t_list));
    if (!new_node)
        return NULL;
    new_node->content = content;
    new_node->next = NULL;
    return new_node;
}
// #include <stdio.h>
// int main()
// {
// 	t_list *node1 = create_node("First");
//     t_list *node2 = create_node("Second");
//     t_list *node3 = create_node("Third");

//     // Link the nodes to form a list: node1 -> node2 -> node3
//     node1->next = node2;
//     node2->next = node3;

//     // Call ft_lstsize and print the result
//     int size = ft_lstsize(node1);
//     printf("The size of the linked list is: %d\n", size);

//     // Free the allocated memory (optional but good practice)
//     free(node1);
//     free(node2);
//     free(node3);

//     return 0;
// }
