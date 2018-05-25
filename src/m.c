/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:05:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 07:15:37 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

int		main(void)
{
	ft_putendl("putendl / putstr / putchar test");
	putstrtest();
	ft_putendl("strcat test");
	strcattest();
	ft_putendl("atoi test");
	atoitest();
	return (0);
}
