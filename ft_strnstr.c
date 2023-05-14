/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:43:11 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/22 12:43:12 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hst, const char *ndle, size_t l)
{
	size_t	i;
	size_t	j;
	char	*hs;
	char	*ndl;

	hs = (char *)hst;
	ndl = (char *)ndle;
	i = 0;
	if (*ndle == 0)
		return (hs);
	while (hs[i] && (l > 0))
	{
		j = 0;
		while (hs[i + j] == ndl[j] && j < l)
		{
			if (ndl[j + 1] == 0)
				return (hs + i);
			j++;
		}
		i++;
		l--;
	}
	return (0);
}
/*
int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "";
	char *ptr;
	ptr = strnstr(largestring, smallstring, 7);

	printf("--> %s\n", ptr);
}*/
