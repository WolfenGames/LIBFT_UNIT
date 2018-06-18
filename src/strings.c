/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:01:03 by jwolf             #+#    #+#             */
/*   Updated: 2018/06/13 12:38:23 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

char	*change(char *s)
{
	*s += 1;
	return (s);
}

void	strtest(void)
{
	char	a[100] 	= "Hello\0 I am Naruto!!1";
	char	c[100] 	= " ";
	char	b[100] 	= "World";
	char	d[1024] = "";
	char	e[]		= "Str Map I";
	char	*ee;
	char	*join	= ft_memalloc(sizeof(char*) * 1024);
	char	*split	= "**libft.h***main.c*file99.c****file1.c****file44.c**";
	char	**list;
	int		i;

	i = 0;
	ft_putendl_i("Testing strcmp ", ft_strcmp("",""));
	list = (char **)malloc(sizeof(char **) * 100 * 100);
	ee = (char *)ft_memalloc(sizeof(char) * 100);
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
	ft_pm(d, 32);
	join = ft_strjoin(d, " ");
	ft_pm(join, 32);
	ft_strcat(d, a);
	ft_putendl(d);
	ee = ft_strmap(e, NULL);
	ft_putendl_c("Should be 'No string passed' --> ", ee);
}
