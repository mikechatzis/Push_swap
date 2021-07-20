/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:42:08 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/20 14:59:14 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "libft/libft.h"
# include <stdio.h>

int		checkdoubles(char **s);
int		checkinvalidarg(char **s);
int		checkifintmaxmin(char **s);
int		errorcheck(int argc, char **s);
int		ft_strcmp(char *s1, char *s2);
long	ft_atol(const char *str);
int		*ft_memcpyint(int *str, const int *c, size_t n);
int		*sortintarr(int *as, int arglen);
void	setalpha(char **s, int *a);
int		*sortalpha(int *a, int arglen);
int		*matchalpha(int arglen);
void	asignalpha(int *a, int *aso, int *asi, int arglen);
void	allaboutalpha(char **argv, int arglen);
size_t	ft_strstrlen(char **c);
int		findchr(const char c, const char *str);
void	freeall(int *asi, int *aso);
int		findmaxbits(int max);
int		alphaissorted(int *a, int arglen);
char	**parseargs(char **s);
void	stackshiftup(int *a, int arglen);
void	stackshiftdown(int *a, int arglen);
void	ra(int *a, int arglen, int size);
void	rra(int *a, int arglen, int size);
int		pb(int *a, int *b, int arglen, int sizeA);
int		pa(int *a, int *b, int arglen);
void	sa(int *a);
void	sb(int *b);
void	rb(int *b, int arglen, int size);
void	setmin(int *a);
void	setmax(int *a);
void	sort2(int *a);
void	sort3(int *a);
void	sort4(int *a, int *b);
void	sortsmallstack(int *a, int *b, int arglen);
void	sortlargestack(int *a, int *b, int arglen, int maxbits);
void	sort(int *a, int arglen, int maxbits);

#endif
