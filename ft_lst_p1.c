/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_p1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hait-sal <hait-sal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 10:29:52 by hait-sal          #+#    #+#             */
/*   Updated: 2023/05/14 12:11:00 by hait-sal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = NULL;
	return (head);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		size;

	ptr = lst;
	if (ptr == NULL)
		return (0);
	else
	{
		size = 0;
		while (ptr != NULL)
		{
			size++;
			ptr = ptr->next;
		}
	}
	return (size);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	if (ptr == NULL)
		return (ptr);
	else
	{	
		while (ptr != NULL)
		{
			if (ptr->next == NULL)
				break ;
			ptr = ptr->next;
		}
	}
	return (ptr);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		ptr = *lst;
		while (ptr != NULL)
		{
			if (ptr->next == NULL)
			{
				ptr->next = new;
				break ;
			}
			ptr = ptr->next;
		}
	}
}

// int main(void)
// {
// 	int	a = 1, b = 2, c = 3, d = 4;
// 	t_list	*new;

// 	t_list	node1;
// 	node1.content = &b;
// 	node1.next = NULL;

// 	t_list	node2;
// 	node2.content = &c;
// 	node2.next = NULL;

// 	t_list	node3;
// 	node3.content = &d;
// 	node3.next = NULL;

// 	new = ft_lstnew(&a);
// 	// ft_lstadd_front(&new, &node2);
// 	printf("\n==%d\n\n", *((int *)new->content));
// 	ft_lstadd_front(&new, &node1);
// 	printf("\n==%d\n\n", *((int *)new->content));
// 	ft_lstadd_back(&new, &node2);
// 	printf("\n==%d\n\n", *((int *)new->content));
// 	ft_lstadd_back(&new, &node3);
// 	printf("\n==%d\n\n", *((int *)new->content));
// 	// printf("\n==%d\n\n", *((int *)new->content));
// 	// printf("\n==%d\n\n", *((int *)new->next->content));
// 	// printf("\n==%d\n\n", *((int *)new->next->next->content));
// 	// ft_lstadd_back(&new, &node2);
// 	// printf("\n==%d\n\n", *((int *)new->content));

// 	// while(new)
// 	// {
// 	// 	printf("%d\n",*((int *)new->content));
// 	// 	new = new->next;
// 	// }
// 	// printf("size : %d\n\n%d , %d\n",ft_lstsize(new), 
//*((int *)new->content), *((int *)new->next->next->next->content));
// 	// printf("size : %d\n",ft_lstsize(new));
// }