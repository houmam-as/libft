/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:15:29 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/18 17:15:30 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	s;
	int	r;

	s = 1;
	r = 0;
	while ((*str < 14 && *str > 8) || *str == 32)
			str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			s = s * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		r = r * 10 + (*str - 48);
		str++;
	}
	return (r * s);
}
/*
#include <stdlib.h>
int main()
{
	printf("--> %d\n--> %d", ft_atoi("   +1234"), atoi("   +1234"));
}*/
