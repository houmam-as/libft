/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:19:28 by hait-sal          #+#    #+#             */
/*   Updated: 2022/11/07 12:22:15 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nbr_l(int n)
{
	long	num;
	int		i;

	num = n;
	i = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		i++;
	while (num)
	{
		num = num / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		nl;
	char	*p;

	nb = n;
	nl = nbr_l(nb);
	p = malloc (nl * sizeof(char) + 1);
	if (!p)
		return (NULL);
	if (n == 0)
		p[0] = 48;
	else if (nb < 0)
	{
		p[0] = 45;
		nb *= -1;
	}
	while (nb)
	{
		p[nl - 1] = nb % 10 + 48;
		nb /= 10;
		nl--;
	}
	p[nbr_l(n)] = 0;
	return (p);
}
