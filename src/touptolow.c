/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   touptolow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:09:23 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 11:21:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

static char	my_toup(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

static char	my_tolow(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

static void	rest(int a)
{
	if (ft_toupper((char)a) !=  my_toup((char)a))
	{
		printf("Expected	::%c\n", my_toup((char)a));
		printf("Got			::%c\n", my_toup((char)a));
	}
}

static void	rest1(int a)
{
	if (ft_tolower((char)a) !=  my_tolow((char)a))
	{
		printf("Expected	::%c\n", my_toup((char)a));
		printf("Got			::%c\n", my_toup((char)a));
	}
}

void	touptolow(void)
{
	printf("TOUPPER\n");
	for (int i = 0; i < 128; i++)
		rest(i);
	printf("TOLOWER\n");
	for (int i = 0; i < 128; i++)
		rest1(i);
}
