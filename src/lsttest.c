/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsttest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:03:36 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/29 11:54:02 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void		lst_test(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	**tree;
	char	*str;
	int		i;

	i = 0;
	str = ft_strnew(32);
	str = ft_strjoin(str, "Hello World");
	lst = ft_lstnew(str, 32);
	tree = ft_memalloc(2048);
	for (int i = 0; i < 42; i++)
		ft_lstadd(tree, lst);
	lst2 = lst;
	printf("%s--%zu\n", lst2->content, lst2->content_size);
	while (lst2->next)
	{
		printf("%s--%zu=%i\n", lst2->content, lst2->content_size, i);
		lst2 = lst2->next;
		if (!lst2->next)
			return ;
		i++;
	}
}
