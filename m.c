/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:05:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/24 18:22:06 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_testputstr(void)
{
	char	a[] = "Hello World\n";
	char	b[] = "Bye Bye W\0rld";
	char	c[] = "\0";

	ft_putstr(a);
	ft_putendl(c);
	ft_putendl(b);
}

void	ft_teststrcat(void)
{
	char	a[256] = "Hello World\n";
	char	b[256] = "Bye Bye W\0rld";
	char	c[256] = "\0Hidden Words";
	char	aa[256] = "Hello World\n";
	char	bb[256] = "Bye Bye W\0rld";
	char	cc[256] = "\0Hidden Words";
	int		ai = 0;
	int		bi = 0;
	int		ci = 0;

	ai = strcmp(ft_strcat(a, b), strcat(aa, bb));
	if (ai == 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???");	
	bi = strcmp(ft_strcat(a, c), strcat(aa, cc));
	if (bi == 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???");
	ci = strcmp(ft_strcat(b, c), strcat(bb, cc));
	if (ci == 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???");

}


int		main(void)
{
	ft_putendl("testing ft_putstr");
	ft_testputstr();
	ft_putendl("Testing ft_strcat");
	ft_teststrcat();
	ft_putendl("This is not norme worthy");
	return (0);
}
