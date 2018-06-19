/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:02:18 by jwolf             #+#    #+#             */
/*   Updated: 2018/06/18 11:50:27 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

static void	rest(char *a)
{
	if (ft_atoi(a) != atoi(a))
	{
		ft_putendl("Da Fuk??");
		printf("expected :: %d\n", atoi(a));
		printf("got      :: %d\n", ft_atoi(a));
	}
}

void	atoitest(void)
{
	char	a[128] = "000000000000000100";
	char	b[128] = "00000000000000-10-";
	char	c[128] = "-123A There is a Nyan Cat in my pants";
	char	d[128] = "0129\0012334\0Hidden\n123";
	char	f[128] = "12345678901234567890";
	char	e[128] = "123456789012345678";
	char	g[128] = "-123456789012345675";
	char	h[128] = "000000000 0000-10-";
	char	i[128] = "        +00000000000031";

	rest(a);
	rest(g);
	rest(e);
	rest(b);
	rest(c);
	rest(d);
	rest(h);
	rest(i);
}
