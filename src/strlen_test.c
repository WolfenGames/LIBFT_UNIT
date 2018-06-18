/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 12:18:19 by jwolf             #+#    #+#             */
/*   Updated: 2018/06/13 12:23:54 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void	strlen_tests(void)
{
	char p[] = "";
	char q[] = "1234567890";

	if (strlen(p) != ft_strlen(p))
		printf("incorrect for \"\"\n");

	if (strlen(q) != ft_strlen(q))
		printf("incorrect 1234567890\n");	

}
