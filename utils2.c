/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:10:42 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/20 19:25:09 by mchatzip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	findchr(const char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	allaboutalpha(char **argv, int arglen)
{
	int	maxbits;
	int	*aso;
	int	*asi;
	int	*a;

	a = malloc(arglen * sizeof(int));
	setalpha(argv, a);
	if (alphaissorted(a, arglen))
	{	
		free(a);
		return ;
	}
	aso = sortalpha(a, arglen);
	asi = matchalpha(arglen);
	asignalpha(a, aso, asi, arglen);
	maxbits = findmaxbits(asi[arglen - 1]);
	sort(a, arglen, maxbits);
	freeall(aso, asi);
	free(a);
	return ;
}
