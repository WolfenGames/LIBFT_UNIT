/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_tests.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 10:27:30 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 11:00:54 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

static int		my_isdigit(int a)
{
	return (a >= '0' && a <= '9');
}

static int		my_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

static int		my_isalnum(int c)
{
	return (my_isdigit(c) || my_isalpha(c));
}

static int		my_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

static int		my_isprint(int c)
{
	return (c > 31 && c < 127);
}

void	rest(int a)
{
	if (my_isdigit(a) != ft_isdigit(a))
	{
		printf("Expected	%c::%d From %d\n", (char)a, my_isdigit(a), a);
		printf("Got			%c::%d From %d\n", (char)a, ft_isdigit(a), a);
	}
}

void	rest1(int a)
{
	if (my_isalnum(a) != ft_isalnum(a))
	{
		printf("Expected	%c::%d From %d\n", (char)a, my_isdigit(a), a);
		printf("Got			%c::%d From %d\n", (char)a, ft_isdigit(a), a);
	}
}

void	rest2(int a)
{
	if (my_isascii(a) != ft_isascii(a))
	{
		printf("Expected	%c::%d From %d\n", (char)a, my_isascii(a), a);
		printf("Got			%c::%d From %d\n", (char)a, ft_isascii(a), a);
	}
}

void	rest3(int a)
{
	if (my_isalpha(a) != ft_isalpha(a))
	{
		printf("Expected	%d::%c\n", my_isalpha(a), (char)a);
		printf("Got			%d::%c\n", ft_isalpha(a), (char)a);	
	}
}

void	rest4(int a)
{
	if (my_isprint(a) != ft_isprint(a))
	{
		printf("Expected	%d::%c\n", my_isprint(a), (char)a);
		printf("Got			%d::%c\n", ft_isprint(a), (char)a);	
	}
}

void	is_tests(void)
{
	printf("Goes through the Whole Ascii\n");
	printf("IsDigit\n");
	for (int i = 0; i <= 127; i++)
		rest(i);
	printf("IsAlNum\n");
	for (int i = 0; i <= 127; i++)
		rest1(i);
	printf("isAscii - Max of 256\n");
	for (int i = 0; i <= 255; i++)
		rest2(i);
	printf("isAlpha - Max 128\n");
	for (int i = 0; i <= 127; i++)
		rest3(i);
	printf("isPrint - max 128\n");
	for (int i = 0; i <= 127; i++)
		rest4(i);
}
