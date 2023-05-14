/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:04:08 by hait-sal          #+#    #+#             */
/*   Updated: 2022/11/02 12:13:04 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *set, int c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_start(const char *s1, const char *set)
{
	unsigned int	i;

	i = 0;
	while (ft_check(set, s1[i]))
	{
		i++;
	}
	return (i);
}

int	ft_end(const char *s1, const char *set)
{
	int	slen;

	slen = ft_strlen(s1) - 1;
	while (ft_check(set, s1[slen]))
	{
		slen--;
	}
	return (slen);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int				substrlen;
	size_t			sslen;
	int				sstart;
	unsigned int	ss;

	if (!*s1)
		return (ft_substr(s1, 0, 0));
	substrlen = ft_end(s1, set) - ft_start(s1, set);
	sslen = (size_t)substrlen;
	sstart = ft_start(s1, set);
	ss = (unsigned int)sstart;
	return (ft_substr(s1, ss, sslen + 1));
}
