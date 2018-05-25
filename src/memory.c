/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 11:26:28 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/25 13:13:41 by jwolf            ###   ########.fr       */
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
	void	**ptr;

	if (!(ptr = ft_memalloc(sizeof(char *) * 1024)))
	{
		printf(EX);
		return ;
	}
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
		printf("vvvvvvvv\n");
		printf("%s^^^^^^^^ MEMCHAR!!1\n", ft_memchr(str, 'W', 1024));
		ft_memmove(str3, a, ft_strlen(a));
		printf("(--)%s\n", str3);
		ft_strclr(a);
		printf("RADNDOM FT_STRCLR :::(%zu):::(%s)<_ 0 and empty\n", ft_strlen(a), a);
	}
}
