/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:01:12 by hait-sal          #+#    #+#             */
/*   Updated: 2022/11/06 07:47:55 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*destination;
	char	*source;
	size_t	i;
	int		c;
	int		m;

	destination = (char *)dst;
	source = (char *)src;
	i = 0;
	c = (int) i;
	m = (int) n;
	c = 0;
	if (destination == (void *)0 && source == (void *)0)
		return (NULL);
	while (c < m)
	{
		*destination = *source;
		destination++;
		source++;
		c++;
	}
	return (dst);
}
/*
int main()
{
	char str1[] = "\0";
	char str2[] = "\0";
	char str3[] = "\0";
	char str4[] = "\0";
	//printf(" --> %s \n", ft_memcpy(str3, str4, 2));
	printf(" --> %s \n ",ft_memcpy(((void *)0), ((void *)0), 3));
	//printf(" --> %s \n",memcpy(((void *)0) , ((void *)0), 2));
	//printf(" --> %s \n",memcpy(str1 , str2, 2));
}*/
