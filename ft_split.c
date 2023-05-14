/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:15:16 by hait-sal          #+#    #+#             */
/*   Updated: 2022/11/05 13:02:08 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	wrd_cntr(char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
				i++;
			j++;
		}
		else
			i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	start;
	size_t	len;

	tab = malloc(sizeof(char *) * (wrd_cntr(s, c) + 1));
	if (!tab)
		return (NULL);
	start = 0;
	i = 0;
	while (i < wrd_cntr(s, c))
	{
		len = 0;
		while (s[start] == c && s[start])
			start++;
		while (s[start + len] != c && s[start + len])
			len++;
		tab[i] = ft_substr(s, start, len);
		start = start + len;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

// int main()
// {
// 	// char *str = "          ";
// 	int i = 0;
// 	char **s1 = ft_split("          ",' ');
// 	while (i < 3)
// 	{
// 		printf("--> %d %s\n", i, s1[i]);
// 		i++;
// 	}
// }
