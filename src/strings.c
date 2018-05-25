/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:01:03 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 13:55:41 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

void	strtest(void)
{
	char	a[100] = "Hello";
	char	c[100] = " ";
	char	b[100] = "World";
	char	d[1024] = "";
	char	*split = "**libft.h***main.c*file99.c****file1.c****file44.c**";
	char	**list;
	int		i;

	i = 0;
	list = (char **)malloc(sizeof(char **) * 100 * 100);
	ft_strcat(a, c);
	printf("%s\n", a);
	if (strlcat(a, b, ft_strlen(b)) > 0)
		strcat(a, b);
	printf("%s\n", a);
	if (strlcat(a, c, 12) <= 0)
		strcat(a, b);
	else
		strcat(a, c);
	if (ft_strequ(a, "Hello World ") == 0)
		printf(EX);
	list = ft_strsplit(split, '*');
	while (list[i])
		ft_putendl(list[i++]);
	ft_strcpy(d, ft_strdup(list[1]));
	ft_putendl(d);
	ft_strjoin(d, " ");
	ft_strcat(d, a);
	ft_putendl(d);
}
