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

void	strtest(void)
{
	char	a[100] 	= "Hello\0 I am Naruto!!1";
	char	c[100] 	= " ";
	char	b[100] 	= "World";
	char	d[1024] = "";
	char	e[]		= "Str Map I\0 Hidden\n Shit";
	char	*ee;
	char	*join	= ft_memalloc(sizeof(char*) * 1024);
	char	*split	= "**libft.h***main.c*file99.c****file1.c****file44.c**";
	char	*split2 = "End of string\0a";
	char	**list;
	int		i;

	i = 0;
	ft_putendl_i("Testing strcmp ", ft_strcmp(" "," H"));
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
	ft_putendl_i("Result of strnstr = ", ft_strcmp(ft_strnstr(split2, "ing\0b", 14),
					strnstr(split2, "ing\0b", 14)));
	split2 = ft_strnstr(split2, "ing\0b", 14);
	ft_putendl_c("StrStr == ", split2);
	ft_strcpy(d, ft_strdup(list[1]));
	ft_putendl(d);
	ft_pm(d, 32);
	join = ft_strjoin(d, " ");
	ft_pm(join, 32);
	ft_strcat(d, a);
	ft_putendl(d);
	ee = ft_strmap(e, change);
	ft_putendl_c("Original Value before map_test --> ", e);
	ft_putendl_c("strmap - Should be 'Tus!Nbq!J' --> ", ee);
	ee = ft_strmapi(e, change_i);
	ft_putendl_c("strmapi - Should be 'SspI\\jA' --> ", ee);
	ft_striter(e, it_test);
	ft_putendl_c("striter - Should be 'Tus!Nbq!J' --> ", e);
	ft_striteri(ee, iti_test);
	ft_putendl_c("striteri - Should be 'Str Map I' --> ", ee);
}
