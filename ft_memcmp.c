/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 13:03:36 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/21 13:03:37 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;

	str1 = (char *)s1;
	str2 = (char *)s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if ((unsigned char)*str1 > (unsigned char)*str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		if ((unsigned char)*str1 < (unsigned char)*str2)
			return ((unsigned char)*str1 - (unsigned char)*str2);
		str1++;
		str2++;
		n--;
	}
	return (0);
}
/*
int main()
{
	int a = ft_memcmp("abcdef", "abc\xfdxx", 5);
	//int b = memcmp("HEllo", "Hello", 1);
	printf("%d \n", a);
	//printf("%d \n", b);
}*/
