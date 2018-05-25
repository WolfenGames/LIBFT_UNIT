/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:05:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 10:51:33 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void	putstrtest(void)
{
	char	a[] = "Hello World\n";
	char	b[] = "Bye Bye W\0rld";
	char	c[] = "\0";

	ft_putstr(a);
	ft_putchar('\n');
	ft_putchar('\0');
	ft_putendl(c);
	ft_putendl(b);
}

static void	rest(t_str a, t_str b, t_str aa, t_str bb)
{
	int		i;

	i = strcmp(ft_strcat(a, b), strcat(aa, bb));
	if (i != 0)
	{
		printf("Expected ::num=%d::str1=%s::str2=%s\n", 0, a, aa);
		printf("Got      ::num=%d::str1=%s::str2=%s\n", i, a, aa);
	}
}

void	strcattest(void)
{
	char	a[256] = "Hello World\n";
	char	b[256] = "Bye Bye W\0rld";
	char	c[256] = "\0Hidden Words";
	char	aa[256] = "Hello World\n";
	char	bb[256] = "Bye Bye W\0rld";
	char	cc[256] = "\0Hidden Words";
	char	bc[256]	= "Broken String Test";

	rest(a, b, aa, bb);
	rest(b, c, bb, cc);
	rest(a, c, aa, cc);
}
