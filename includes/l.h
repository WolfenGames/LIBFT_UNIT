/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l.h                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <jwolf@student.wethinkcode.co.za>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 07:08:18 by jwolf             #+#    #+#             */
/*   Updated: 2019/06/18 14:28:23 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef L_H
# define L_H
# define EX "HMM FUCKED UP YOU DID\n"

# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	atoitest(void);
void	putstrtest(void);
void	strcattest(void);
void	fd_test(void);
void	itoatest(void);
void	teststrcpy(void);
void	is_tests(void);
void	putnbrt(void);
void	touptolow(void);
void	mem(void);
void	test_jasen_theory(void);
void	strtest(void);
void	strlen_tests(void);
void	lst_test(void);
void    it_test(char *c);
void    iti_test(unsigned int i, char *c);

char    change(char s);
char    change_i(unsigned int i, char c);

void	*ft_pm(const void *add, size_t size);

#endif
