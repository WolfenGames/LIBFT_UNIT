/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teststrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:39:16 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 11:02:39 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

static void rest(char	*str)
{
	char	*a;
	char	*b;

	a = (char *)malloc(sizeof(a) * 1024);
	b = (char *)malloc(sizeof(b) * 1024);
	ft_strcpy(a, str);
	strcpy(b, str);
	if (strcmp(a, b) != 0)
	{
		printf("Expected	::%s FROM %s", b, str);
		printf("Got			::%s FROM %s", a, str);
	}
}

static void rest2(char *str)
{
	char *a = (char *)malloc(sizeof(char *) * 1024);
	char *b = (char *)malloc(sizeof(char *) * 1024);

	ft_strncpy(a, str, 4);
	strncpy(b, str, 4);
	if (strcmp(a, b) != 0)
	{
		printf("Expected	::%s FROM %s AT 4", b, str);
		printf("Got			::%s FROM %s AT 4", a, str);
	}
}

void	teststrcpy(void)
{
	char	a[1024] = "Hello Cruel World";
	char	b[1024] = "good Bye Cru\0World";
	char	c[1024] = "\0Does this work???";

	rest(a);
	rest(b);
	rest(c);
	rest2(a);
	rest2(b);
	rest2(c);
}


