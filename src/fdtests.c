/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdtests.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 08:41:42 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/18 08:42:18 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

int		main(void)
{
	ft_putendl("Testing fd -> same tests as putendl / putstr/ putchar");
	fd_test();
	return 0;
}