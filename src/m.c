/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 18:05:09 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 11:31:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

int		main(void)
{
	printf("IF YOU SEE NOTHING ELSE BUT TEXT DONT PANIC!!!!11!!1!\n\n\n\n");
	ft_putendl("putendl / putstr / putchar test");
	putstrtest();
	ft_putendl("strcat test");
	strcattest();
	ft_putendl("atoi test");
	atoitest();
	ft_putendl("Testing fd -> same tests as putendl / putstr/ putchar");
	fd_test();
	ft_putendl("Testing itoa");
	itoatest();
	ft_putendl("Testing strcpy && strncpy");
	teststrcpy();
	ft_putendl("Testing the is? stuff");
	is_tests();
	ft_putendl("Testing ft_putnbr + ft_putnbr_fd\n");
	putnbrt();
	ft_putendl("Testing toUp && toLow\n");
	touptolow();
	ft_putendl("Testing Mem... What was I doing again???\n");
	mem();
	return (0);
}
