/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:52:37 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/10 16:54:29 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char *)dst;
	source = (char *)src;
	if (!destination && !source)
		return (NULL);
	if (dst > src)
	{
		while (len)
		{
			len--;
			destination[len] = source[len];
		}
	}
	else
	{
		ft_memcpy(destination, source, len);
		return (destination);
	}
	return (destination);
}
/*
int main()
{
    //char src[] = "This is an example";
    //char dst[] = "Houmam";
	//char str[19] = "This is an example";
    //printf("Before : %s \n", dst);
    //ft_memmove(str + 7, str, 10);
	printf("my : %s\n", ft_memmove(((void *)0), ((void *)0), 5));
	//char str1[19] = "this is an example";
	//memmove(str1 + 7, str1, 10);
	printf("original : %s\n", memmove(((void *)0), ((void *)0), 5));
}*/
