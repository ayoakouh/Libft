/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 08:58:24 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 16:59:49 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current;
	if (*lst == NULL)
	{
		*lst = new;
		return;
	}
	current = *lst;
   while (current ->next != NULL)
   {
	   current = current->next;
   }
   current ->next = new;
}
#include <stdlib.h>
t_list *createNode(void *content) {
    t_list *newNode = (t_list *)malloc(sizeof(t_list));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    newNode->content = content;
    newNode->next = NULL;
    return newNode;
}

// // Main function to test ft_lstadd_back
// int main() {
//     // Create the first node of the list
//     t_list *head = createNode((void *)(intptr_t)1); // First node with content 1

//     // Create additional nodes
//     t_list *second = createNode((void *)(intptr_t)2); // Second node with content 2
//     t_list *third = createNode((void *)(intptr_t)3);  // Third node with content 3

//     // Link the second node to the list
//     ft_lstadd_back(&head, second);

//     // Link the third node to the list
//     ft_lstadd_back(&head, third);

//     // Print the list to verify the nodes were added
//     t_list *current = head;
//     while (current != NULL) {
//         printf("Node content: %d\n", (int)(intptr_t)current->content);
//         current = current->next;
//     }

//     // Free the allocated memory
//     free(third);
//     free(second);
//     free(head);

//     return 0;
// }
