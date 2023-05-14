/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:11:18 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/18 12:46:05 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	int				strsiz;

	str = (unsigned char *)s;
	strsiz = ft_strlen(s);
	if ((unsigned char)c == 0)
		return ((char *)str + strsiz);
	else if (strsiz == 0)
		return (NULL);
	while (strsiz >= 0)
	{
		if (*(str + strsiz) == (unsigned char)c)
			return ((char *)str + strsiz);
		strsiz--;
	}
	return (NULL);
}
/*
int main()
{
    printf("--> %s\n", ft_strrchr("Hello_world!", 0));
    printf("--> %s\n", ft_strrchr("Hello_world!", 'z'));
}*/
