/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:55:20 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/01 14:04:19 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst ->next != NULL)
	{
		lst = lst ->next;
	}
	return (lst);
}
int main()
{
	t_list node0;
	t_list node1;
	t_list node2;
	t_list node3;


	node0.content = 
}
