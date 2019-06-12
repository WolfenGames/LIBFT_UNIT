/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:01:03 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/12 08:50:05 by jwolf            ###   ########.fr       */
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
	ft_putstr(NULL);
	printf("Testing strcmp %d", ft_strcmp(" "," H"));
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
	printf("Result of strnstr = %d\n", ft_strcmp(ft_strnstr(split2, "ing\0b", 14),
					strnstr(split2, "ing\0b", 14)));
	split2 = ft_strnstr(split2, "ing\0b", 14);
	printf("StrStr == %s\n", split2);
	ft_strcpy(d, ft_strdup(list[1]));
	ft_putendl(d);
	ft_pm(d, 32);
	join = ft_strjoin(d, " ");
	ft_pm(join, 32);
	ft_strcat(d, a);
	ft_putendl(d);
	ee = ft_strmap(e, change);
	printf("Original Value before map_test --> %s\n", e);
	printf("strmap - Should be 'Tus!Nbq!J' --> %s\n", ee);
	ee = ft_strmapi(e, change_i);
	printf("strmapi - Should be 'SspI\\jA' --> %s\n", ee);
	ft_striter(e, it_test);
	printf("striter - Should be 'Tus!Nbq!J' --> %s\n", e);
	ft_striteri(ee, iti_test);
	printf("striteri - Should be 'Str Map I' --> %s\n", ee);
}
