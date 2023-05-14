/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 06:05:50 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/28 06:05:56 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	slen;

	slen = ft_strlen(s1);
	p = malloc ((slen + 1) * sizeof(char));
	if (!p)
		return (NULL);
	ft_memmove(p, s1, slen + 1);
	return (p);
}
/*
int main()
{
	char s[] = "Hello Houmam";
	printf("--> %s\n", ft_strdup(s));
}*/
