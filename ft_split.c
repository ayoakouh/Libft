/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayoakouh <ayoakouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:37:28 by ayoakouh          #+#    #+#             */
/*   Updated: 2024/11/10 16:58:05 by ayoakouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_countword(char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && !(str[i] == c))
			j++;
		while (str[i] && !(str[i] == c))
			i++;
	}
	return(j);
}
static int ft_lenword(char *s, int i, char n)
{
	int count = 0;
	while (s[i] != '\0' && !(s[i] == n))
	{
		i++;
		count++;
	}
	return (count);
}

static char * ft_word(char *s,char **words, char c,int n_word)
{
    int i = 0;
    int j = 0;
    int size_w = 0;
    int k = 0;
    char *wo_rd = NULL;
	while(size_w < n_word)
	{
		while(s[i] && s[i] == c)
			i++;
		wo_rd = (char *)malloc(ft_lenword(s,i,c) + 1);
		if (wo_rd == NULL)
			return(NULL);
		while (s[i] && s[i] != c)
			wo_rd[j++] = s[i++];
		wo_rd[j] = '\0';
		words[k] = wo_rd;
		size_w++;
		j = 0;
		k++;
	}
	words[k] = NULL;
	return (wo_rd);
}

char **ft_split(char const *s, char c)
{
	int		i;
	int		num_word;
    char	**str = NULL;

	i = 0;
    if(s == NULL)
        return(NULL);
    num_word = ft_countword((char *)s,c);
    if (!(str = malloc(sizeof(char *) * (num_word + 1))))
        return (NULL);
   if (ft_word((char *)s,str,c,num_word) == NULL)
   {
	   while (i < num_word)
		   free(str[i]);
	   i++;
	   free(str);
	   return(NULL);
   }
    return(str);
}
// #include <stdio.h>
// int main()
// {
// 	int		i = 0;
// 	char *str ="@@@ ayoub @@ aliii @@@";
// 	char c = '@';
// 	char **result;
// 	result = ft_split(str, c);
// 	while (result[i] != NULL)
// 	{
// 		printf("%s", result[i]);
// 		i++;
// 	}
// }
