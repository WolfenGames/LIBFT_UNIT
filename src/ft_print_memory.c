/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:20:03 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/29 10:50:17 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void		my_putchar(char c)
{
	write(1, &c, 1);
}

static void		my_putstr(char *s)
{
	while (*s)
		my_putchar(*s++);
}

static void		print_hex(unsigned char hex)
{
	char	*tab;

	tab = "0123456789abcdef";
	my_putchar(tab[hex / 16]);
	my_putchar(tab[hex % 16]);
}

static void		print_char(unsigned char hex)
{
	if (hex > 31 && hex < 127)
		my_putchar(hex);
	else
		my_putchar('.');
}

static void		make_hexs(char *line, size_t curline, size_t size)
{
	size_t	i;

	i = 0;
	while (i < 16)
	{
		if (i && i % 2 == 0)
			my_putchar(' ');
		if (curline * 16 + i < size)
			print_hex(line[i]);
		else
			my_putstr("  ");
		i++;
	}
}

void			*ft_pm(const void *addr, size_t size)
{
	size_t			curline;
	unsigned char	*tmp;
	size_t			i;

	curline = 0;
	tmp = (unsigned char *)addr;
	while (curline * 16 < size)
	{
		make_hexs((char *)tmp, curline, size);
		my_putchar(' ');
		i = 0;
		while (i < 16)
		{
			if (curline * 16 + 1 < size)
				print_char(tmp[i]);
			i++;
		}
		my_putchar('\n');
		tmp += 16;
		curline++;
	}
	return (NULL);
}
