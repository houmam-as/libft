/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:21:57 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/14 15:22:03 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	if ((char)c == 0)
	{
		return (str + ft_strlen(str));
	}
	while (*str != '\0')
	{
		if ((unsigned char)*str == (unsigned char)c)
			return (str);
		str++;
	}
	return (NULL);
}
