/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:41:31 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/19 12:41:32 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (*s1 || *s2)
	{
		if (n == 0)
			return (0);
		if ((unsigned char)*s1 > (unsigned char)*s2)
			return (1);
		if ((unsigned char)*s1 < (unsigned char)*s2)
			return (-1);
		if (*s1 == 0 || *s2 == 0)
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
