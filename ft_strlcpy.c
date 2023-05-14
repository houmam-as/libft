/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 01:11:02 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/16 01:11:03 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*(src + i) != '\0' && i < dstsize - 1 && dstsize != 0)
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char dst[18];
	char *src = "This";
	printf("--> %zu \n", ft_strlcpy(dst, src, 18));
	printf("--> %zu \n", strlcpy(dst, src, 18));
}*/
