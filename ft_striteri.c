/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:24:21 by hait-sal          #+#    #+#             */
/*   Updated: 2022/11/10 17:19:40 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void my_fct(unsigned int i, char *s)
// {
// 	*s -= 32;
// }

// int main()
// {
// 	char s[] = "hello";
// 	ft_striteri(s, my_fct);
// 	printf("%s\n", s);
// }
