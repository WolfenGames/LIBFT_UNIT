/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:12:34 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 10:52:31 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

static size_t	my_charcount(long n)
{
	size_t		i;

	i = 1;
	if (n < 0)
		n = -n;
	while (n > 9)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static char	*my_strnew(size_t n)
{
	char	*ret;
	char	*res;
	size_t	i;

	if (!(ret = (char *)malloc(sizeof(ret) * n + 1)))
		return (NULL);
	res = ret;
	while (i < n + 1)
	{
		res[i] = '\0';
		i++;
	}
	return(res);
}

static char	*my_itoa(int n)
{
	long	l;
	size_t	cnt;
	char	*str;
	int		neg;

	l = n;
	neg = (l < 0) ? 1 : 0;
	cnt = my_charcount(l);
	str = my_strnew(cnt + neg);
	if (!str)
		return (NULL);
	if (neg)
	{
		l = -l;
		str[0] = '-';
	}
	while (cnt > 0)
	{
		str[cnt + neg - 1] = (l % 10) + '0';
		cnt--;
		l /= 10;
	}
	return (str);
}

static void	rest(int a)
{
	if (strcmp(my_itoa(a), ft_itoa(a)) != 0)
	{
		printf("A- Expected :: %d==%s\n", a, my_itoa(a));
		printf("B- Got      :: %d==%s\n", a, ft_itoa(a));
	}
}

void	itoatest(void)
{
	size_t		a = -999999999999999999;
	size_t		b = 99999999999999999;
	size_t		c = 93485029435;
	size_t		d = 9388234;
	size_t		e = -9129938;
	size_t		f = -998323;
	size_t		g = -12355;

	rest(a);
	rest(b);
	rest(c);
	rest(d);
	rest(e);
	rest(f);
	rest(g);
}
