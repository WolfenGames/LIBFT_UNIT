/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:05:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 07:10:38 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void	putstrtest(void)
{
	char	a[] = "Hello World\n";
	char	b[] = "Bye Bye W\0rld";
	char	c[] = "\0";

	ft_putstr(a);
	ft_putendl(c);
	ft_putendl(b);
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

	 if (strcmp(ft_strcat(a, b), strcat(aa, bb)) == 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???");	
	if (strcmp(ft_strcat(a, c), strcat(aa, cc)) == 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???");
	if (strcmp(ft_strcat(b, c), strcat(bb, cc))== 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???");
	if (strcmp(b, strcat(bb, bc)) == 0)
		ft_putendl("Worked");
	else
		ft_putendl("Da Fuk???\n\nJust Kidding it works");

}
