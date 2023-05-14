/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:46:24 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/19 17:46:25 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	//char *r = ft_memchr(s, 0, 0);
	char *rr = memchr(s, 0, 0);
	printf("%d\n", *rr);
	//printf("%d\n", *r);
}*/
