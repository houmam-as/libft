/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:30:11 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/31 14:56:04 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	slen1;
	size_t	slen2;

	slen1 = ft_strlen(s1);
	slen2 = ft_strlen(s2);
	p = malloc(slen1 + slen2 + 1);
	if (!p)
		return (NULL);
	ft_memmove(p, s1, slen1);
	ft_memmove(p + slen1, s2, slen2 + 1);
	return (p);
}
/*
int main()
{
    printf("%s", ft_strjoin("lorem ipsum", "dolor sit amet"));
}*/
