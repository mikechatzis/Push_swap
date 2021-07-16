/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchatzip <mchatzip@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 16:10:42 by mchatzip          #+#    #+#             */
/*   Updated: 2021/07/16 10:49:01 by mchatzip         ###   ########.fr       */
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

int	*allaboutalpha(char **argv, int arglen)
{
	int	maxbits;
	int	*aso;
	int	*asi;
	int	*a;

	a = setalpha(argv, arglen);
	if (alphaissorted(a, arglen))
		return (a);
	aso = sortalpha(a, arglen);
	asi = matchalpha(arglen);
	a = asignalpha(a, aso, asi, arglen);
	maxbits = findmaxbits(asi[arglen - 1]);
	sort(a, arglen, maxbits);
	freeall(aso, asi);
	return (a);
}

/*int i = 0; while (i <= 14)
		printf("%d ", a[i++]);*/