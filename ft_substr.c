/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 08:02:43 by hait-sal          #+#    #+#             */
/*   Updated: 2022/11/13 17:19:59 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;
	char		*v;
	long long	y;

	if (start >= ft_strlen(s))
	{
		v = malloc (sizeof(0));
		*v = 0;
		return (v);
	}
	y = len;
	if (len > ft_strlen(s))
		y = ft_strlen(s) - start;
	p = malloc ((y + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memmove(p, s + start, y);
	*(p + y) = 0;
	return (p);
}
/*
int main()
{
	char s[] = "01234";
	printf("--> %s\n", ft_substr("hola", 0, 18446744073709551615));
}*/
