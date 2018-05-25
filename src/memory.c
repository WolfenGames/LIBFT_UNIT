/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:26:28 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 11:57:04 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/l.h"

size_t	mystrlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	mem(void)
{
	char	*str;
	char	a[40] = "Hello World\n\0JJenkins didnt die";
	char	*str2 = (char *)malloc(sizeof(char *) * 2048);
	char	str3[100]; 

	if (!(str = ft_memalloc(sizeof(str) * 1024)))
	{
		printf("No Memory!!!\n");
	}
	else
	{
		if (ft_strlen(a) != mystrlen(a))
		{
			printf("RANDOM STRLEN TEST\n You Failed\n");
			return ;
		}
		ft_memcpy(str, a, ft_strlen(a));
		printf("%s\n", str);
		ft_memset(str, '\0', ft_strlen(str));
		printf("%s", str);
		memcpy(str, a, ft_strlen(a));
		printf("re:%s", str);
		if (memcmp(str, a, mystrlen(a)) != ft_memcmp(str, a, mystrlen(a)))
			printf(EX);
		ft_memcpy(str2, str, ft_strlen(str));
		printf("Memchr\n");
		if (memchr(str2, 'W', 1024) != ft_memchr(str2, 'W', 1024))
			printf(EX);
		ft_memmove(str3, a, ft_strlen(a));
		printf("%s::%s\n", str3, a);
	}
}
