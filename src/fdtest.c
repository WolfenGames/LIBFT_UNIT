/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdtest.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 08:03:02 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 08:11:43 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void	fd_test(void)
{
	char	a[256] = "Hello World\n";
	char	b[256] = "Good Bye World\n\0 I am Hidden";
	char	c[256] = "Hello again W\0rld";

	ft_putchar_fd('\0', 1);
	ft_putchar_fd('\n', 1);
	ft_putstr_fd(a, 1);
	ft_putstr_fd(b, 1);
	ft_putendl_fd(c, 1);
}
