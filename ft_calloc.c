/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 05:47:57 by hait-sal          #+#    #+#             */
/*   Updated: 2022/10/27 05:48:24 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}
/*
int main()
{
	int *P = calloc(8539,sizeof(int));
	printf("%p --> %d\n", P, *P);
	printf("%p --> %d\n", P + 1, *(P + 1));
	printf("%p --> %d\n", P + 2, *(P + 2));
}*/
