/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:32:06 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/17 16:32:07 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (srclen);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	if (dstsize > dstlen)
	{
		i = 0;
		while (src[i] && (dstlen + i) < (dstsize - 1))
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		dst[dstlen + i] = '\0';
	}
	return (dstlen + srclen);
}
/*
int main()
{
	//char dest[] = "pqrstuvwxyz";
	//char src[] = "abcd";
		//src[] = "an example";
	//dest[] = "This is ";
	//printf("ft_strlcat --> %zu\n", ft_strlcat(dst,"an example", 20));	
	//j = strlcat("", "", 6);
	char aa[14]= "there is";
	char bb[]= "the cake is a lie !\0I'm hidden lol\r\n";
	printf("%zu\n",strlcat(aa, "lorem ipsum dolor sit amet", 1));
	//printf("\n%lu", sizeof('a'));
}*/
