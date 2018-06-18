/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsttest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 11:03:36 by jwolf             #+#    #+#             */
/*   Updated: 2018/06/18 13:30:19 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void		test_del(void *s, size_t n)
{
	free(s);
	(void)n;
}

void		iter(t_list *v)
{
	*(size_t *)v->content = *(size_t *)v->content + 1;
}

t_list		*test_map(t_list *elem)
{
	t_list	*new;
	char	*content;
	size_t	i;

	content = ft_strdup((char *)elem->content);
	i = 0;
	while (i < ft_strlen(content))
	{
		content[i] += 1;
		i++;
	}
	new = ft_lstnew((void const *)content, 5);
	free(content);
	return (new);
}

void		lst_test(void)
{
	t_list	*lst;
	t_list	*lst2;
	t_list	**tree;
	char	*str;
	int		i;
	void	*del;


	i = 0;
	str = ft_strnew(32);
	str = ft_strjoin(str, "Hello World");
	tree = ft_memalloc(2048);
	for (int i = 0; i < 42; i++)
	{
		lst = ft_lstnew(str, i);
		ft_lstadd(tree, lst);
	}
	del = test_del;
	lst2 = lst;
	while (lst2->next)
	{
		printf("%s--%zu\n", lst2->content, lst2->content_size);
		lst2 = lst2->next;
	}
	ft_lstdel(&lst2, del);
	if (lst2)
		ft_putstr(EX);
	else
		ft_putendl("lst_del works");
	lst2 = lst;
	i = 0;
	while (i < 42)
	{
		i++;
		if (i == 10)
		{
			ft_putendl("Deleting");
			ft_putendl((char *)lst2->content);
			ft_putendl(ft_itoa(lst2->content_size));
			ft_lstdelone(&lst2, del);
		}
		if (lst2)
			lst2 = lst2->next;
	}
	free(lst2);
	lst2 = lst;
	i = 0;
	if (lst2)
	{
		while (i < 41)
		{
			if ((ft_memcmp(lst2->content,"Hello World", ft_strlen((const char *)lst2->content)) == 0))
				printf("%s--%zu\n", lst2->content, lst2->content_size);
			if (lst2)
				lst2 = lst2->next;
			i++;
		}
	}
	else
	{
		ft_putendl("No lst2???");
	}
	lst2 = ft_lstmap(lst, test_map);
	i = 0;
	if (lst2)
	{
		while (i < 10)
		{
			if (lst2->content)
				printf("%s--%zu\n", lst2->content, lst2->content_size);
			if (lst2)
				lst2 = lst2->next;
			i++;
		}
	}
	t_list	*begin;
	size_t	v;
	size_t	w;

	v = 1;
	w = 2;
	begin = ft_lstnew(&v, sizeof(size_t));
	begin->next = ft_lstnew(&w, sizeof(size_t));
	ft_lstiter(begin, iter);
	if (*(size_t *)begin->content != 2 && *(size_t *)begin->next->content != 3)
		ft_putendl(EX);
	free(begin->next);
	free(begin);
}
